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

	int y_now, a_now, another_y, another_a;

	cout << rus_str("Введите текущий год и нажмите ENTER.\n");
	cin >> y_now;

	cout << rus_str("Введите свой возраст (в годах).\n");
	cin >> a_now;

	cout << rus_str("Введите год, для которого вы хотите узнать свой возраст.\n");
	cin >> another_y;

	another_a = another_y - (y_now - a_now);
	if (another_y >= 0)
	{
	 cout <<rus_str("В ")<< another_y << rus_str(" году вам будет ");
	 cout << another_a << "\n";
	}
	else
	{
	cout << rus_str("В ")<< another_y << rus_str(" вы еще не родились!\n");
	}

	system("pause");

	return 0;
}
//---------------------------------------------------------------------------
