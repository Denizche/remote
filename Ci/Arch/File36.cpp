//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream.h>
#include <fstream.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main()
{
	int i,j;                                      // ���� ������ ��� ���������
	char a[256], character , ch;                        // ������ �������� , ������ (x2)
	int st[256],number;                                  // ������ ����� , ����� �������
	for (i = 0; i < 256; i++)
		{
			st[i]=0;
		}
	for (i = 0; i <= 255; i++) {       // ������ ���� �������� � ������
	character = number;
	cout << character;
	number++;
	a[i]= character;
	}
	cout << "\n";
	for ( i = 0; i <= 255; i++) {     // �������� ������� "��������"
	cout << a[i];
	}
	cout << "\n";
	for ( i = 0; i <= 255; i++) {    // ��������� ������� ����������
	st[i]=0;
	}
	for ( i = 0; i <= 255; i++) {     // �������� ������� ����������
	cout << st[i];
	}
	cout << "\n";

	//�������� ������� �����/������

	ifstream in_stream;
	ofstream out_stream;
	in_stream.open("input.txt");
	out_stream.open("text.arch") ;

	while (! in_stream.eof()){
	in_stream.get(ch);
	for (i = 0; i <= 255; i++) {
	  if (ch == a[i]) {
		 st[i]++;
		 break;
	  }
	}
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
	for (i = 0; i < 256; i++)                     // ��������� �� ������������� ��������
		{
			if (st[i]!=0)
				{
					cout << a[i] << " : " << st[i] << endl;
				}
		}

	cin.get();
	return 0;
}

//---------------------------------------------------------------------------
