#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <fstream>
using namespace std;

struct Node                        //Структура узла
{

	 int a;                       //частота встречаемости
	 char c;                      //буква
	 Node *left, *right;         //указатели на левую и праву ветку узла

	 Node()             //Новый узел с пустыми ветками
	 {
	 left=right=NULL;
	 }

	 Node(Node *L, Node *R)  //объединение двух элементов в один узел

	 {
	 left =  L;             //Ставим элемент в левую ветку
	 right = R;             //Ставим элемент в правую ветку
	 a = L->a + R->a;       //Суммируем частоту встречаемости
	 }
};


struct MyCompare  //Сравнение элементов и сортировка через sort от меньшей частоты к большей
{
	bool operator()(const Node* l, const Node* r) const
	{
	return l->a < r->a;
	}
};


vector<bool> code;             //Вектор битов формата bool (1/0)
map<char,vector<bool> > table; //Массив векторов "Таблица кодированных символов" с указателем типа char (буква ch - код vectr)

void BuildTable(Node *root)  //Ф-я построения таблицы кодировок ( начало графа "кореной узел" )
{
	if (root->left!=NULL)    //обходим по левой граф по левой стороне, если есть элемент слева
	   {
	   code.push_back(0);      //Тк идем по левой ветке забиваем в таблицу 0
	   BuildTable(root->left); //Рекурсия. Продолжаем идти по графу пока не достигнем разязки без левой ветки
	   }

	if (root->right!=NULL)    //Идем по правой ветке если она существует
	   {
	   code.push_back(1);     //Тк идем по правой ветке забиваем в таблицу 1
	   BuildTable(root->right);   //Рекурсия. Продолжаем идти по графу пока не достигнем развязки без правой ветки
	   }

	if (root->left==NULL && root->right==NULL)//если нет развязок влево и врпаво (Достигли символ)
		table[root->c]=code;       			  //cтавим в соответсвие символу полученный код

	code.pop_back();  //убираем последий бит из вектора чтоб не обходить
	//граф с начала а продолжить с предыдущего узла
}


int main (int argc, char *argv[])
{
/*

				Подсчет статистки

*/
	ifstream f("1.txt");    //input файл

	map<char,int> m;  //массив статистики (указатель - буква : число - частотая встр-ти )

	while (!f.eof()) // Пока файл не кончится проходим его и
	{
	char c = f.get();  //берем по одному символу из него
	m[c]++;    //и прибавляем 1 к частоте встр-ти в массив с указателем на этот симвал
	}


////// записываем начальные узлы в список list

   list<Node*> t; //Список указателей на Node
   for( map<char,int>::iterator itr=m.begin(); itr!=m.end(); ++itr) //для
   {
	  Node *p = new Node;
	  p->c = itr->first;
	  p->a = itr->second;
	  t.push_back(p);      }


//////  создаем дерево

  while (t.size()!=1)
  {
	 t.sort(MyCompare());

	 Node *SonL = t.front();
	 t.pop_front();
	 Node *SonR = t.front();
	 t.pop_front();

	 Node *parent = new Node(SonL,SonR);
	 t.push_back(parent);

  }

	Node *root = t.front();   //root - указатель на вершину дерева

////// создаем пары 'символ-код':

	BuildTable(root);

////// Выводим коды в файл output.txt

	f.clear(); f.seekg(0); // перемещаем указатель снова в начало файла

	ofstream g("output.txt");

	int count=0; char buf=0;
	while (!f.eof())
	{ char c = f.get();
	  vector<bool> x = table[c];
	  for(int n=0; n<x.size(); n++)
	   {buf = buf | x[n]<<(7-count);
		count++;
		if (count==8) { count=0;   g<<buf; buf=0; }
	   }
	}

	f.close();
	g.close();

///// считывание из файла output.txt и преобразование обратно

	ifstream F("output.txt");
	ofstream F2("output2.txt");
	setlocale(LC_ALL,"Russian"); // чтоб русские символы отображались в командной строке

	Node *p = root;
	count=0; char byte;
	byte = F.get();
	while(!F.eof())
	{   bool b = byte & (1 << (7-count) ) ;
		if (b) p=p->right; else p=p->left;
		if (p->left==NULL && p->right==NULL) {F2<<p->c; p=root;}
		count++;
		if (count==8) {count=0; byte = F.get();}
	}

	F.close();
	F2.close();
	return 0;
}
