#include <Windows.h>
#include <tchar.h>

 
LRESULT CALLBACK WndProc (HWND, UINT, WPARAM, LPARAM);
BOOL CALLBACK EnumFunc(HWND hWnd,LPARAM lParam);
HINSTANCE hinst;

HWND hWnd;		// ���������� �������� ���� ���������
HWND chWnd;		// ���������� ���� ��������� 
MSG msg; 		// ��������� ��� �������� ��������� 
WNDCLASS wc; 	// ����� ����
WNDCLASS child; 	// ����� ����
TCHAR WinName[] = _T("MainFrame");
int WINAPI _tWinMain(
HINSTANCE This,		 // ���������� �������� ���������� 
HINSTANCE Prev, 	// � ����������� �������� ������ 0 
LPTSTR cmd, 		// ��������� ������ 

int mode) 		// ����� ����������� ����
{ 

// ����������� ������ ���� 
wc.hInstance = This; 
wc.lpszClassName = WinName; 				// ��� ������ ���� 
wc.lpfnWndProc = WndProc; 					// ������� ���� 
wc.style = CS_HREDRAW | CS_VREDRAW; 			// ����� ���� 
wc.hIcon = LoadIcon(NULL, IDI_APPLICATION); 		// ����������� ������ 
wc.hCursor = LoadCursor(NULL, IDC_ARROW); 		// ����������� ������ 
wc.lpszMenuName = NULL; 					// ��� ���� 
wc.cbClsExtra = 0; 						// ��� �������������� ������ ������ 
wc.cbWndExtra = 0; 						// ��� �������������� ������ ���� 
wc.hbrBackground = CreateSolidBrush(RGB(1,1,1)); 	// ���������� ���� ����� ������ 

// ����������� ������ ����
if (!RegisterClass(&wc)) return 0; 		
// �������� ���� 
hWnd = CreateWindow(WinName,			// ��� ������ ���� 
_T("������"), 		// ��������� ���� 
WS_OVERLAPPEDWINDOW, 		// ����� ���� 
CW_USEDEFAULT,				// x 
CW_USEDEFAULT, 				// y	 ������� ���� 
CW_USEDEFAULT, 				// width 
CW_USEDEFAULT, 				// Height 
HWND_DESKTOP, 				// ���������� ������������� ���� 
NULL, 						// ��� ���� 
This, 						// ���������� ���������� 
NULL); 					// �������������� ���������� ��� 



chWnd = CreateWindow(WinName,					// ��� ������ ���� 
						_T("��� �������"), 		// ��������� ���� 
						WS_CHILD|WS_CAPTION, 		// ����� ���� 
						10,						// x 
						10, 						// y	 ������� ���� 
						300, 						// width 
						300, 						// Height 
						hWnd, 				        // ���������� ������������� ���� 
						NULL, 						// ��� ���� 
						This, 						// ���������� ���������� 
						NULL); 						// �������������� ���������� ��� 
ShowWindow(hWnd, 2); 				// �������� ����				
ShowWindow(chWnd, SW_SHOW);



// ���� ��������� ��������� 
while(GetMessage(&msg, NULL, 0, 0)) 
{ 
TranslateMessage(&msg); 		// ������� ���������� ����� ������� ������� 
DispatchMessage(&msg); 		// �������� ��������� ������� WndProc() 
} 
return 0;
}

// ������� ������� ���������� ������������ ��������
// � �������� ��������� �� ������� ��� ������� ����������

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{ 

switch(message)		 // ���������� ���������
{ 
case WM_DESTROY : 
	PostQuitMessage(0); 
	break; 			// ���������� ��������� 
case WM_LBUTTONDOWN:
	{
				for(int i=4; i>0; --i){
				ShowWindow(chWnd, SW_HIDE);
				Beep (220,300);Sleep(200);
				ShowWindow(chWnd, SW_SHOW);
				Beep (262,300);Sleep(300);
				Sleep(200);
				}
	}
	return 0;
case WM_RBUTTONDOWN:
	{
      	for(int i=3; i>0; --i){
				Beep (246,100);Sleep(300);
				ShowWindow(chWnd, SW_HIDE);
				Beep (330,100);Sleep(150);
				ShowWindow(chWnd, SW_SHOW);
				Sleep(200);
			}
	}
	return 0;
default : 			// ��������� ��������� �� ��������� 
return DefWindowProc(hWnd, message, wParam, lParam); 
} 
return 0;
}














/*
// ����������� ������ ��������� ���� 
child.hInstance = This; 
child.lpszClassName = ChildName; 				// ��� ������ ���� 
child.lpfnWndProc = WndProc; 					// ������� ���� 
child.style = CS_HREDRAW | CS_OWNDC; 			// ����� ���� 
child.hIcon = LoadIcon(NULL, IDI_APPLICATION); 		// ����������� ������ 
child.hCursor = LoadCursor(NULL, IDC_ARROW); 		// ����������� ������ 
child.lpszMenuName = NULL; 					// ��� ���� 
child.cbClsExtra = 0; 						// ��� �������������� ������ ������ 
child.cbWndExtra = 0; 						// ��� �������������� ������ ���� 
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