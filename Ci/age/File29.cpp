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

	cout << rus_str("������� ������� ��� � ������� ENTER.\n");
	cin >> y_now;

	cout << rus_str("������� ���� ������� (� �����).\n");
	cin >> a_now;

	cout << rus_str("������� ���, ��� �������� �� ������ ������ ���� �������.\n");
	cin >> another_y;

	another_a = another_y - (y_now - a_now);
	if (another_y >= 0)
	{
	 cout <<rus_str("� ")<< another_y << rus_str(" ���� ��� ����� ");
	 cout << another_a << "\n";
	}
	else
	{
	cout << rus_str("� ")<< another_y << rus_str(" �� ��� �� ��������!\n");
	}

	system("pause");

	return 0;
}
//---------------------------------------------------------------------------
