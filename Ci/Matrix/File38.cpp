//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream.h>
#include <fstream.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused


char main_color[]="color ##";
/*void change_color()
{
 char x = rand () % 16, y = rand() % 16;
 if (x==y) {
 ++y ;
 }
 y%=16;
 if(x>9){
 x += 'A' - 10;
 }
 else {
 x += '0';
 }
 if (y>9) {
 y += 'A' - 10;
 }
 else {
 y += '0';
 }
 main_color[6]=x;
 main_color[7]=y;
 system(main_color);
}   */

void change_color()
{
 char x = '0', y = 'A';
 main_color[6]=x;
 main_color[7]=y;
 system(main_color);
}

int main()
{
change_color();
int i=0;
cout << "H";
Sleep(100);
cout << "e";
Sleep(100);
cout << "l";
Sleep(100);
cout << "l";
Sleep(100);
cout << "o ";
Sleep(100);
cout << "N";
Sleep(100);
cout << "e";
Sleep(100);
cout << "o.";
Sleep(100);
cout << "W";
Sleep(100);
cout << "e";
Sleep(100);
cout << "l";
Sleep(100);
cout << "c";
Sleep(100);
cout << "o";
Sleep(100);
cout << "m";
Sleep(100);
cout << "e";
Sleep(100);
cout << " ";
Sleep(100);
cout << "t";
Sleep(100);
cout << "o";
Sleep(100);
cout << " ";
Sleep(100);
cout << "Matrix.";
Sleep(100);
 system("cls");
	while (true)
		{




		 cout << "1   0   l   l   o      1   o   0   l   ";
				 cout << " 0   1   0   0   1      0   1   1   0  1 ";
						 cout << "a       C       %      &       @      + ";
		 i++;
		 Sleep(50);
		 if (i >= 30)
		 {
		 i=0;
		 system("cls");
		 }


		 }

	system("pause");
	return 1;
}

//---------------------------------------------------------------------------
