//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <windows.h>
#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>
//---------------------------------------------------------------------------


#pragma argsused

int main()
{

	char character;
	int number = 51;
	int count = 0;
	ifstream in_stream1;   //��� ����� �����
	ifstream in_stream2;    //��� ��������
	ofstream out_stream;

	out_stream.open("int.txt");//�������� �����
	for (count = 1; count <= 5; count++)
	{
		out_stream << number++ << ' ';
	}
	out_stream.close();

	in_stream1.open("int.txt");                   //������� ����� ����� � �����
	count = 0;
	in_stream1 >> number;
	while ( !in_stream1.eof() )
	{
	count++;
	in_stream1 >> number;
	}
	in_stream1.close();
	cout << "There are " << count << " int numbers,\n"    ;

	in_stream2.open("int.txt");				//������� ��������
	count = 0;
	in_stream2 >> character;
	while ( !in_stream2.eof() )
		{
		count++;
		in_stream2 >> character;
		}
	in_stream2.close();
	cout << " that consist of " << count << " chars. \n";
	system("pause");

	return 0;
}

//---------------------------------------------------------------------------