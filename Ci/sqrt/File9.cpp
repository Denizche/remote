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

	cout << rus_str(" ������� ������������ �����\n") ;
	cin  >> number ;

	cout << rus_str(" ������ �� ");

	cout.setf(ios::scientific);
  //cout.precision(2);
	cout << number;

	cout << rus_str(" �������� ����� ") << sqrt( number ) <<  ".\n";

	system("pause");

	return 0;
}
//---------------------------------------------------------------------------
