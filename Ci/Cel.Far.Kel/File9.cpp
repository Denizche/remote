//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <iostream.h>
#include <windows.h>
#include <math.h>

char* rus_str( char* str )
		{
			CharToOem( str, str );
			return str;
		}

int main(int argc, char* argv[])
{

	int cel,i,key;
	cout << rus_str("Цельсий 	Фаренгейт 		Абсолютная Температура\n");
	for (cel = 0; cel < 200; cel++) {
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << cel;
	if (cel<10)                                    //Отступ после Цельс
	{
	cout << "                 "  ;
	}
	else if (cel>9&&cel<100) {
		 cout << "                "  ;
		 }
	else if (cel>99&&cel<1000) {
		 cout << "               "  ;
		 }
	else
	{
	cout << "               "  ;
	}
	cout << 1.8*cel+32              ;
	if (1.8*cel+32<100.00)                       // -=- После Фарен
		{
		cout << "                        "  ;
		}
	else if (((1.8*cel+32)>99.99)&&((1.8*cel+32)<1000)) {
		 cout << "                       "  ;
		 }
	else if (1.8*cel+32>999.99&&1.8*cel+32<10000) {
		 cout << "                       "  ;
		 }
	else
	{
	cout << "                     "  ;
	}
	cout << 273.15+cel;
	cout << "\n";                    ;
	}


	system("pause");

	return 0;
}
//---------------------------------------------------------------------------
