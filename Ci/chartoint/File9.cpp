//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <iostream.h>
#include <windows.h>

char* rus_str( char* str )
		{
			CharToOem( str, str );
			return str;
		}

int main(int argc, char* argv[])
{

	int number,ans;

	char character;
	cout << rus_str(" Ввод вручную или вывод всех сиволов (0/1)\n") ;
	cin  >> ans ;

	if (ans==0)
		{
			cout << rus_str(" Введите символ \n") ;
			cin  >> character ;
			number = character ;
				if (number<0)                        //КОСТЫЛЬ
				{
				 number = 256+number;
				}
			cout << " char " ;
			cout << character ;
			cout << " has ";
			cout << " int ";
			cout << number << " \n ";
		}
	else if (ans==1)
	{


	for (number = 0; number <= 255 ; number++)
		{
			character = number ;
			cout << " char " ;
			cout << character ;
			cout << " has ";
			cout << "int ";
			cout << number << " \n ";
		}
	}

	system("pause");

	return 0;
}
//---------------------------------------------------------------------------
