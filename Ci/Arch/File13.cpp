/*//---------------------------------------------------------------------------
 ������� ����� ���������.
 ���� ��. �.�.������� ��5-11.
 1 ����, 1 ������.
 2015
 ���������.
 ��������� ����� �������� �� ��������� �������� ������������,
 � ����� �� �.�. ������������ � �.�. ���������
*///---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream.h>
#include <fstream.h>
//#include <locale.h>
#include <string.h>
#pragma hdrstop
#include <stdlib.h>
#include <stdio.h>
#include <sstream>

//---------------------------------------------------------------------------

#pragma argsused

int main()
{
	int i,j;                                      // ����������� ���� ���������
	int nenol=0,slen=0;                             //���-�� �������� ������������� � ������, ����� ������ string+1
	char a[256], character , ch, string[9];// ������ �������� , ������ (x2), ������ ��� ������ ���������� �������� � �������� ��
	int st[256],number,max=0;               // ��������� ������ ���������� , ����� �������, ������������ st[i]
   //	char mstring[999999];
	for (i = 0; i < 256; i++)
		{
			st[i]=0;
		}
	for (i = 0; i <= 255; i++) {       // ������ �������  ASCII
		character = number;
		number++;
		a[i]= character;
	}
	for ( i = 0; i <= 255; i++) {     // �������� ������� "��������"
		cout << a[i];
	}
	cout << "\n";
	for ( i = 0; i <= 255; i++) {    // ��������� ������� ����������
		st[i]=0;
		//string[i]=NULL;
	}
	for ( i = 0; i <= 255; i++) {     // �������� ������� ����������
		cout << st[i];
	}
	cout << "\n";

	ifstream in_stream;                    //���������������� ������� �����/������
	ofstream out_stream;
	in_stream.open("input.txt");           //�������� ����� ����� � �������� ���������
	stringstream strStream;
	strStream << in_stream.rdbuf();		//read the file
	out_stream.open("output.arh") ;
	char lastch;
	while (!in_stream.eof()){             //���� ����������
		in_stream.get(ch);
		if (ch!='\0') {
			lastch=ch;
		}
		for (i = 0; i <= 255; i++) {
		  if (ch == a[i]) {
			 st[i]++;
			 break;
	  }
	}
	}

	 cout << "\nDEBUG"<<lastch<<endl;







	/*for (i = 255; i != 0; i--) {
	 if (st[i] = 0) {
	 cout << "\nDEBUG"<<i<<endl;
	 st[i]=st[i]-1;
	 break;
	 }
	 }*/


	in_stream.close();                     //�������� ������ "�����"
	for (i = 0; i < 256; i++)
		{
			for (j = 0; j < 256; j++)
				{
					if (st[i]>st[j])              // ���������� � ������� ��������
						{
							int k = st[i];
							char l=a[i];
							a[i]= a[j];
							st[i]=st[j];
							a[j]=l;
							st[j]=k;

						}
				}
		}


	for (i = 0; i <= 255; i++){                     // ����� ���������������� ��������
		if (st[i]!=0){
		nenol++;
		}
		else a[i]=NULL;                                 //��������� ������ ��������
	}
	cout <<  "\n";
	for (i = 0; i <= 255; i++){                     // ����� ���������������� �������
		if (a[i]==NULL) {}
		else cout << a[i]<< " ";
	}
	cout <<  "\n";
	for (i = 0; i <= 255; i++){                     //  ����� ��������������� ����������
		if (st[i]!=0){
			cout << st[i]<< " ";
		}
	}

	cout << "\n"<< nenol <<"\n";

	itoa(nenol,string,2);
	cout << string<< " ";
	slen = strlen(string)+1;
	cout << slen;                //���� ���-�� 1 � 0 ��� ���������

	cout <<"\nmax " << max <<" ";
   //	itoa(max, mstring ,2)   ;
  //	cout << mstring;
	cin.get();
	return 0;
}

//---------------------------------------------------------------------------