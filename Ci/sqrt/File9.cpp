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

	int ans,i;
	float number;

	cout << rus_str(" Введите вещественное число\n") ;
	cin  >> number ;

	cout << rus_str(" Корень из ");

	cout.setf(ios::scientific);
  //cout.precision(2);
	cout << number;

	cout << rus_str(" примерно равен ") << sqrt( number ) <<  ".\n";

	system("pause");

	return 0;
}
//---------------------------------------------------------------------------
