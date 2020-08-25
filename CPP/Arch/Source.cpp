#include <windows.h>
#include <stdio.h>
#include <math.h>
#include <GL\GL.H>
#include <GL\GLAux.h>
#include <GL\GLU.H>
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <fstream>
//#include <GL\glui.h>

#pragma comment(lib, "OPENGL32.lib")
#pragma comment(lib, "GLU32.lib")
#pragma comment(lib, "glut32.lib")
#pragma comment(lib, "Glaux.lib")

short i = 0;
double X, Y;



using namespace std;

struct Node             //Структура "узел"
{

	 int a;             //Частота встречаемости
	 char c;            	//Символ
	 Node *left, *right;       //указатели на левую и правую ветку узла

	 Node()			  //создание нового узла с пустыми ветками
	 {
	 left=right=NULL;
	 }


	 Node(Node *L, Node *R)   //объединение двух элементов в один узел
	 {
	 left =  L;            //один элемент ставим в левую ветку
	 right = R;            //второй в правую ветку
	 a = L->a + R->a;     //Суммируем частоту встречаемости
	 }
};


struct MyCompare        //Сравнение элементов и сортировка через sort от меньшей частоты к большей
{
	bool operator()(const Node* l, const Node* r) const//bool ф-я которая берет два указателя из списка и сравнивает элементы на которые они ссылаются
	{
	return l->a < r->a;   //функция возвращает true если левый элемент встречается в файле реже чем правый
	}
};


vector<bool> code;          //Вектор битов формата bool (1/0)
map<char,vector<bool> > table;  //Массив векторов "таблица кодированных символов" с указателем типа char (буква ch - код vectr)

void BuildTable(Node *root)//Ф-я построения таблица кодировок (Корневой узел)
{

	if (root->left!=NULL)  //идем по графу сверху вниз придерживаясь левой ветки пока она существует
					  {
					  code.push_back(0);    //тк идем по левой стороне забиваем в таблицу 0

					  BuildTable(root->left);
					  }

	if (root->right!=NULL)
					   {
					   code.push_back(1);

					   BuildTable(root->right);
					   }

	if (root->left==NULL && root->right==NULL)
	table[root->c]=code;


    code.pop_back();
}


int Arch ()
{
////// считаем частоты символов
	ifstream inp("1-input.txt");

	map<char,int> Freq;
	cout<<"Input file:";
	cout<<endl;
	while (!inp.eof())
	{
	char c = inp.get();
	cout<<c;
	Freq[c]++;
	}
	cout<<endl;
  


   list<Node*> t;
   map<char,int>::iterator itr;//создаем итератор для навигации по map'у
   for( itr=Freq.begin(); itr!=Freq.end(); ++itr)
   {
      Node *p = new Node;
      p->c = itr->first;
      p->a = itr->second;  
	  t.push_back(p);                    // записываем начальные узлы в список list
   }


//////  создаем дерево		

  while (t.size()!=1)
  {
     t.sort(MyCompare());
    
	 Node *LeftBranch = t.front();

	 t.pop_front();
	 Node *RightBranch = t.front();

	 t.pop_front();
     
	 Node *parent = new Node(LeftBranch,RightBranch);
     t.push_back(parent);

  }
	
	Node *root = t.front();   //root - указатель на вершину дерева

	BuildTable(root);   // создаем пары 'символ-код':
		
////// Выводим закодированные символы в файл output.txt

	inp.clear(); inp.seekg(0); // перемещаем указатель снова в начало файла
    
	ofstream CodedF("2-output.txt"); //создаем файл output
	cout<<"Coded File: ";
	cout<<endl;
	int count=0; char buf=0;        //создаем переменные для счетчика и буфера
	while (!inp.eof())            //Проходим исходный файл от начала до конца
	{
	char c = inp.get();           //Берем символ из исх. файла
	vector<bool> x = table[c];    //Берем из таблицы кодировок код этого символа

	for(int n=0; n < x.size(); n++)  //проходим по коду символа от начала до конца
		{
		buf = buf | x[n]<<(7-count); //записываем символ кода в буфер
		count++;               //считаем сколько мы обработали бит
		if (count==8)          //когда набирается на 1 байт
			{
			count=0;          //обнуляем счетчик
			CodedF << buf;    //записываем символ в файл
			cout<<buf;
			buf=0;         //обнуляем буфер
			}
		}
	}
	int KOSTYL=buf;
	if (buf!=0)
	{
	cout<<"		BUF - "<< buf <<"-"<<KOSTYL+256<<" count "<<count<< endl;
	 buf = buf | 1<<(8-count); //записываем символ кода в буфер
	 count++ ;
	 for (count; count < 9; count++) {
	  buf = buf | 0<<(8-count); //записываем символ кода в буфер
	 }
	 KOSTYL=buf;
	cout<<"		BUF - "<< buf <<"-"<<KOSTYL+256<<" count "<<count<< endl;
	CodedF << buf;
	}
	cout<<endl;
	inp.close();         //закрываем исх. файл
	CodedF.close();      //закрываем сжатый файл

///// считывание из файла output.txt и преобразование обратно

	ifstream F("2-output.txt");
	ofstream F2("3-Decoded.txt");
	setlocale(LC_ALL,"Russian"); // чтоб русские символы отображались в командной строке

	cout<<endl;

	F.clear(); F.seekg(0); // перемещаем указатель снова в начало файла


	cout<<"DecodedFile:";
	F.clear(); F.seekg(0); // перемещаем указатель снова в начало файла

	int Len=0;
	Node *p = root;
	count=0; char byte; 
	byte = F.get();
	while(!F.eof())
	{
		bool b = byte & (1 << (7-count) ) ;
		if (b) p=p->right;
		else p=p->left;
		if (p->left==NULL && p->right==NULL)
		{
		F2 << p->c;
		Len++;
		cout << p->c;
		p=root;
		}
		count++;
		if (count==8) {count=0; byte = F.get();}
	}
    F.close();
	F2.close();


	cout<<endl;
	system("pause");

	return 0;
}



void CALLBACK resize(int width, int height)
{
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10, 10, -10, 10, 2, 50);
	gluLookAt(0, 0, 10, 0, 0, 0, 0, 1, 0);
	glMatrixMode(GL_MODELVIEW);
}



void CALLBACK display(void)
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glColor3d(1, 1, 1);

	glPushMatrix();
	glTranslated(0, -5, 0);
	auxSolidSphere(4);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 0, 0);
	auxSolidSphere(3);
	glPopMatrix();

	glPushMatrix();
	glTranslated(0, 3.7, 0);
	auxSolidSphere(2);
	glPopMatrix();

	glPushMatrix();
	glColor3d(0, 0, 1);
	glTranslated(0, 5.2, 0);
	glRotated(-90, 1, 0, 0);
	auxSolidCone(1, 2);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glTranslated(1, 4.7, 1.6);
	auxSolidSphere(0.3);
	glPopMatrix();

	glPushMatrix();
	glColor3d(0, 1, 0);
	glTranslated(-1, 4.7, 1.6);
	auxSolidSphere(0.3);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 1, 1);
	glRotated(45, 0, 0, 1);
	glTranslated(1.5, 1.5, 0);
	auxSolidCylinder(0.7, 10);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 0, 0);
	glRotated(45, 0, 0, 1);
	glTranslated(1.5, -4, 0);
	auxSolidCylinder(0.8, 2);
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 1, 1);
	glTranslated(3.9, -1.75, 1);
	auxSolidSphere(0.5);
	glPopMatrix();

	glPushMatrix();

	glColor3d(0, 0, 0);
	glRotated(45, 0, 0, 1);
	glTranslated(1.5, -4, 1.55);
	glBegin(GL_LINE_STRIP);

	glVertex3d(-0.3, 0.3, 0);
	glVertex3d(0, 0.3, 0);
	glVertex3d(0, -0.3, 0);
	glVertex3d(0.3, -0.3, 0);

	glEnd();

	glBegin(GL_LINE_STRIP);

	glVertex3d(0.3, 0.3, 0);
	glVertex3d(0.3, 0, 0);
	glVertex3d(-0.3, 0, 0);
	glVertex3d(-0.3, -0.3, 0);

	glEnd();
	glPopMatrix();

	glPushMatrix();
	glColor3d(1, 1, 1);
	glRotated(-135, 1, 0, 0);
	glRotated(-30, 0, 0, 1);
	glTranslated(-2.5, 1.5, 0);
	auxSolidCylinder(0.7, 10);
	glPopMatrix();

	glRotated(0.5, 0, 1, 0);

	auxSwapBuffers();

}



void main()
{

	Arch();


	float pos[4] = { 3,3,3,1 };
	float dir[3] = { -1,-1,-1 };

	auxInitPosition(50, 10, 800, 800);
	auxInitDisplayMode(AUX_RGB | AUX_DEPTH | AUX_DOUBLE);
	auxInitWindow("Primitives");
	auxIdleFunc(display);
	auxReshapeFunc(resize);


	glEnable(GL_ALPHA_TEST);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glLightfv(GL_LIGHT0, GL_POSITION, pos);
	glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, dir);
	auxMainLoop(display);
}