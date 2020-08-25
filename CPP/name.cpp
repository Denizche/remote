#include <Windows.h>
#include <tchar.h>
#include <stdlib.h>
#include <time.h>


LRESULT CALLBACK WndProc (HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK EnumFunc(HWND hWnd,LPARAM lParam);
HINSTANCE hinst;

HWND hWnd;		// Дескриптор главного окна программы
HWND chWnd;		// Дескриптор окна программы 
MSG msg; 		// Структура для хранения сообщения 
WNDCLASS wc; 	// Класс окна
WNDCLASS child; 	// Класс окна
TCHAR WinName[] = ("MainFrame");


int WINAPI _tWinMain
(
HINSTANCE This,		 // Дескриптор текущего приложения 
HINSTANCE Prev, 	// В современных системах всегда 0 
LPTSTR cmd, 		// Командная строка 
int mode) 		// Режим отображения окна
{ 
srand(time(NULL));
// Определение класса окна 
wc.hInstance = This; 
wc.lpszClassName = WinName; 				// Имя класса окна 
wc.lpfnWndProc = WndProc; 					// Функция окна 
wc.style = CS_HREDRAW | CS_VREDRAW; 			// Стиль окна 
wc.hIcon = LoadIcon(NULL, IDI_APPLICATION); 		// Стандартная иконка 
wc.hCursor = LoadCursor(NULL, IDC_ARROW); 		// Стандартный курсор 
wc.lpszMenuName = NULL; 					// Нет меню 
wc.cbClsExtra = 0; 						// Нет дополнительных данных класса 
wc.cbWndExtra = 0; 						// Нет дополнительных данных окна 
wc.hbrBackground = CreateSolidBrush(RGB(10,70,10)); 	// Заполнение окна зеленым цветом 

// Регистрация класса окна
if (!RegisterClass(&wc)) return 0; 		
// Создание окна 
hWnd = CreateWindow(WinName,			// Имя класса окна 
("Каркас"), 		// Заголовок окна 
WS_OVERLAPPEDWINDOW, 		// Стиль окна 
CW_USEDEFAULT,				// x 
CW_USEDEFAULT, 				// y	 Размеры окна 
CW_USEDEFAULT, 				// width 
CW_USEDEFAULT, 				// Height 
HWND_DESKTOP, 				// Дескриптор родительского окна 
NULL, 						// Нет меню 
This, 						// Дескриптор приложения 
NULL); 					// Дополнительной информации нет 



chWnd = CreateWindow(WinName,					// Имя класса окна 
						("Сын Каркаса"), 		// Заголовок окна 
						WS_CHILD|WS_CAPTION, 		// Стиль окна 
						10,						// x 
						10, 						// y	 Размеры окна 
						300, 						// width 
						300, 						// Height 
						hWnd, 				        // Дескриптор родительского окна 
						NULL, 						// Нет меню 
						This, 						// Дескриптор приложения 
						NULL); 						// Дополнительной информации нет 
ShowWindow(hWnd, 2); 				// Показать окно				
ShowWindow(chWnd, SW_SHOW);



// Цикл обработки сообщений 
while(GetMessage(&msg, NULL, 0, 0)) 
{ 
TranslateMessage(&msg); 		// Функция трансляции кодов нажатой клавиши 
DispatchMessage(&msg); 		// Посылает сообщение функции WndProc() 
} 
return 0;
}

// Оконная функция вызывается операционной системой
// и получает сообщения из очереди для данного приложения

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{ 
static PAINTSTRUCT ps;
static HDC hdc;
static RECT winRect;
 int r = rand()%200; 
 int g = rand()%200; 
 int b = rand()%200; 
static int i = 0; 
GetClientRect(chWnd, &winRect);
static int paint=0;

switch(message)		 // Обработчик сообщений
{ 
	case WM_DESTROY : 
		PostQuitMessage(0); 
		break; 			// Завершение программы 
	case WM_LBUTTONDOWN:
		{
			for(int i=3; i>0; --i){
				FlashWindow(chWnd, TRUE);
				Sleep(200);
				
				/*	
				ShowWindow(chWnd, SW_HIDE);
				Beep (220,100);Sleep(200);
				ShowWindow(chWnd, SW_SHOW);
				Beep (562,100);Sleep(300);
				Sleep(200);
				*/
				
				
				
				
			}
			paint=1;
			InvalidateRect(chWnd, &winRect, true);
				
		}
		break;
	case WM_PAINT:
		{

			if (paint){
					BeginPaint( chWnd, &ps );
					FillRect( ps.hdc, &ps.rcPaint, CreateSolidBrush(RGB(r,g,b)));
					EndPaint( chWnd, &ps );
					paint=0;
			}InvalidateRect(chWnd, &winRect, true);
		}
		break; 
	case WM_RBUTTONDOWN:
		{
      		for(int i=8; i>0; --i){
					FlashWindow(chWnd, TRUE);
					Sleep(200);
			}paint=1;
			InvalidateRect(chWnd, &winRect, true);
		}
		break;
	default : 			// Обработка сообщения по умолчанию 
	return DefWindowProc(hWnd, message, wParam, lParam); 
} 
return 0;
}














/*
// Определение класса дочернего окна 
child.hInstance = This; 
child.lpszClassName = ChildName; 				// Имя класса окна 
child.lpfnWndProc = WndProc; 					// Функция окна 
child.style = CS_HREDRAW | CS_OWNDC; 			// Стиль окна 
child.hIcon = LoadIcon(NULL, IDI_APPLICATION); 		// Стандартная иконка 
child.hCursor = LoadCursor(NULL, IDC_ARROW); 		// Стандартный курсор 
child.lpszMenuName = NULL; 					// Нет меню 
child.cbClsExtra = 0; 						// Нет дополнительных данных класса 
child.cbWndExtra = 0; 						// Нет дополнительных данных окна 
*/



 /*
		Beep (262,300);Sleep(300);
		Beep (196,300);Sleep(300);
		Beep (164,300);Sleep(300);
        Beep (220,300);Sleep(100);
        Beep (246,100);Sleep(300);
        Beep (233,200);
        Beep (220,100);Sleep(300);
		Beep (196,100);Sleep(150);
        Beep (330,100);Sleep(150);
        Beep (392,100);Sleep(150);
        Beep (440,100);Sleep(300);
        Beep (349,100);Sleep(100);
        Beep (392,100);Sleep(300);
        Beep (330,100);Sleep(300);
        Beep (262,100);Sleep(100);
        Beep (294,100);Sleep(100);*/