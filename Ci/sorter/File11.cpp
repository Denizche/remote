/*//---------------------------------------------------------------------------
 ������� ����� ���������.
 ���� ��. �.�.������� ��5-11.
 1 ����, 1 ������.
 2015
 ���������.
 ��������� ����� �������� �� ��������� �������� ������������,
 � ����� �� �.�. ������������ � �.�. ���������
*///---------------------------------------------------------------------------
 //#include <locale.h>
#include <vcl.h>
#include <iostream.h>
#include <fstream.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <math.h>

//---------------------------------------------------------------------------
#pragma hdrstop
#pragma argsused
int main()
{
	int i,j;                                      // ����������� ���� ���������
	int nenol=0,slen=0;                             //���-�� �������� ������������� � ������, ����� ������ string+1
	char a[256], character , ch, string[9];// ������ �������� , ������ (x2), ������ ��� ������ ���������� �������� � �������� ��
	char code[8];
	char minstring[999];
	int st[256],number,max=0,min=9999;               // ��������� ������ ���������� , ����� �������, ����/��� st[i]
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
	}
	for ( i = 0; i <= 7; i++) {    // ��������� ������� CODE
		code[i]='-';
	}
	for ( i = 0; i <= 255; i++) {     // �������� ������� ����������
		cout << st[i];
	}
	cout << "\n";

	ifstream in_stream;                    //���������������� ������� �����/������
	ofstream out_stream;
	ofstream CodeFile;
	ofstream CharsFile;
	in_stream.open("input.txt");           //�������� ����� ����� � �������� ���������
	out_stream.open("output.arh") ;
	CodeFile.open("code.arh") ;
	CharsFile.open("chars.arh") ;
	char lastch;
	cout << "\n";
	while (! in_stream.eof()){             //���� ����������
		in_stream.get(ch);
		if (ch!='\0') {
		cout << ch;
		lastch=ch;
		}
		for (i = 0; i <= 255; i++) {
		  if (ch == a[i]) {
			 st[i]++;
			 break;
	  }
	}
	}


	cout << "\nlast char '"<<lastch<<"'"<<endl;




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


	for (i = 0; i <= 255; i++){                     // ��������� ������ ������� ����������
		if (st[i]!=0){
			if (a[i]==lastch) {
				st[i]=st[i]-1;
			}
		nenol++;
		}
		else a[i]=NULL;                                 //��������� ������ ��������
	}
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

	for (i = 0; i <= 255; i++) {
	 if (st[i] >= max) {
	 max = st[i];
	 }
	 if ((st[i]<= min)&&(st[i]>0)) {
	 min = st[i];

	 }
	 }


	lastch=NULL;
	ch=0;


	cin.get();
	return 0;
}

//---------------------------------------------------------------------------






