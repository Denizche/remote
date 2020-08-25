										 //---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <windows.h>
#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>
//---------------------------------------------------------------------------


#pragma argsused

const int LENGTH = 1000;
typedef char File_array[LENGTH]  ;
int main()
{
	char character;
	File_array file;
	int count;
	ifstream in_stream;

	in_stream.open("File34.cpp");
	in_stream.get(character);
	for (count = 0; !in_stream.eof() && count < LENGTH; count++) {
	file[count] = character;
	in_stream.get(character);
	}
	in_stream.close();
	count=0;
	while (count < LENGTH)
	{
	cout << file[count];
	count++;
	}
	cout << "\n";
	system("pause");
	system("cls");

	return 0;
}

//---------------------------------------------------------------------------
