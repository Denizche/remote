/*//---------------------------------------------------------------------------
 Чечелев Денис Сергеевич.
 МГТУ им. Н.Э.Баумана РТ5-11.
 1 курс, 1 модуль.
 2015
 Архиватор.
 Авторские права оставляю за Семеновым Дмитрием Валерьевичем,
 а также за А.А. Богуславским и С.М. Соколовым
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
	int i,j;                                      // определение типа счётчиков
	int nenol=0,slen=0;                             //кол-во символов встречающихся в тексте, длина строки string+1
	char a[256], character , ch, string[9];// Массив алфавита , символ (x2), строка для записи количества символов в двоичной СС
	int st[256],number,max=0;               // Численный массив статистики , номер символа, максимальное st[i]
   //	char mstring[999999];
	for (i = 0; i < 256; i++)
		{
			st[i]=0;
		}
	for (i = 0; i <= 255; i++) {       // Запись таблицы  ASCII
		character = number;
		number++;
		a[i]= character;
	}
	for ( i = 0; i <= 255; i++) {     // Проверка массива "алфавита"
		cout << a[i];
	}
	cout << "\n";
	for ( i = 0; i <= 255; i++) {    // Обнуление массива статистики
		st[i]=0;
		//string[i]=NULL;
	}
	for ( i = 0; i <= 255; i++) {     // Проверка массива статистики
		cout << st[i];
	}
	cout << "\n";

	ifstream in_stream;                    //Переименовывание потоков ввода/вывода
	ofstream out_stream;
	in_stream.open("input.txt");           //открытие файла ввода и создание выходного
	stringstream strStream;
	strStream << in_stream.rdbuf();		//read the file
	out_stream.open("output.arh") ;
	char lastch;
	while (!in_stream.eof()){             //Сбор статистики
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


	in_stream.close();                     //Закрытие потока "ввода"
	for (i = 0; i < 256; i++)
		{
			for (j = 0; j < 256; j++)
				{
					if (st[i]>st[j])              // Сортировка в порядке убывания
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


	for (i = 0; i <= 255; i++){                     // Вывод отсортированного алфавита
		if (st[i]!=0){
		nenol++;
		}
		else a[i]=NULL;                                 //Отсечение лишних символов
	}
	cout <<  "\n";
	for (i = 0; i <= 255; i++){                     // Вывод отсортированного алфавит
		if (a[i]==NULL) {}
		else cout << a[i]<< " ";
	}
	cout <<  "\n";
	for (i = 0; i <= 255; i++){                     //  Вывод отсортированной статистики
		if (st[i]!=0){
			cout << st[i]<< " ";
		}
	}

	cout << "\n"<< nenol <<"\n";

	itoa(nenol,string,2);
	cout << string<< " ";
	slen = strlen(string)+1;
	cout << slen;                //МАКС КОЛ-ВО 1 и 0 при кодировке

	cout <<"\nmax " << max <<" ";
   //	itoa(max, mstring ,2)   ;
  //	cout << mstring;
	cin.get();
	return 0;
}

//---------------------------------------------------------------------------