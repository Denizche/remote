// ConsoleArrayFile.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//---------------------------------------------------------------//
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "windows.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

//функция вывода меню
void displaymenu()
{
	system("cls"); //очистка экрана
	
	std::cout << " 1. Создать файл с исходными данными " << endl;
	std::cout << " 2. Загрузить исходные данные        " << endl;
	std::cout << " 3. Вывести исходные данные          " << endl;
	std::cout << " 4. Обработать данные                " << endl;
	std::cout << " 5. Завершить работу с программой    " << endl;
	
}
//функция проверки наличия файла
bool filecreatid(string PATH)
{
	ofstream file_out;
	bool fcreate = false;
	file_out.open(PATH, ios::in);
	if (file_out) {
		file_out.close();
		fcreate = true;
	}
	return fcreate;
}
//функция создания файла
bool filecreate(string PATH)
{
	ofstream file_out;
	file_out.open(PATH, ios::binary);

	bool fcreate = false;
	if (file_out.is_open())
	{
		fcreate = true;
	}
	file_out.close();

	return fcreate;
}
//функция подсчёта кол-ва элементов массива в файле
int sizearray(string PATH)
{
	int arrsize = 0;

	ifstream file_in;
	string str;
	file_in.open(PATH, ios::in | ios::binary);
	if (file_in)
	{
		while (getline(file_in, str))
		{
			arrsize++;
		}
		file_in.close();
	}

	return arrsize;
}
//функция записи массива в файл
bool filewrite(string PATH, float *pArr, int arrsize)
{
	ofstream file_out;
	bool fcreate = false;
	file_out.open(PATH, ios::binary);
	if (file_out)
	{
		fcreate = true;
		stringstream st;

		for (int i = 0; i < arrsize; i++)
		{
			while (true) {
			st.str(""); st.clear();
			st << "Введите " << i + 1 << "-й элемент массива";
			std::cout << st.str() << endl;
			std::cin >> pArr[i];

				if (cin.good())
				{
					cin.ignore(10, '\n');
					break;
				}
				cin.clear();
				cout << "ОШИБКА! Введённая команда не является цифрой" << endl;
				cin.ignore(10, '\n');
			}

			st.str(""); st.clear();
			st << pArr[i];
			file_out << st.str() << endl;
		}
		file_out.close();
	}
	return fcreate;
}
//функция чтения массива из файла
bool fileread(string PATH, float *pArr, int arrsize)
{
	ifstream file_in;
	float digit;
	bool fread = false;
	file_in.open(PATH, ios::in | ios::binary);
	if (file_in)
	{
		fread = true;
		for (int i = 0; i < arrsize; i++)
		{

			file_in >> digit; //чтение очередного значения из потока file_in в переменную digit 
			pArr[i] = digit; //заполняем массив данными из файла
		}
		file_in.close();
	}

	return fread;
}
//функция вывода массива на экран
void outarray(float *pArr, int arrsize)
{
	for (int i = 0; i < arrsize; i++)
	{
		std::cout << pArr[i] << setw(6); //вывод массива
	}
}
//функция нахождения минимального элемента
int minvalue(float *pArr, int arrsize)
{
	if (arrsize == 0)
		return -1;

	int minpos = 0;

	for (int i = 1; i < arrsize; i++)
		if (pArr[i] < pArr[minpos])
			minpos = i;
	return minpos;
}
//функция нахождения суммы до минимального элемента
float sumresult(int minpos, float *pArr, int arrsize)
{
	float result = 0;
	for (int i = 1; i < minpos; i++)
	{
		result += pArr[i];
	}
	return result;
}

int main()
{
	//--------------------кириллица в консоли---------------------//
	setlocale(LC_ALL, "rus");
	//-----получение пути файла - файл в директории проекта--------//
	char* buffer = new char[MAX_PATH];
	GetCurrentDirectoryA(MAX_PATH, buffer);

	string FILENAME, PATH = "", fileopen;
	stringstream st;
	int arrsize = 0, mitem, minpos, i;
	bool fsuccess = false; bool arrcreate = false, fcreatid = false;//флаги состояний
	float min = 0, sum = 0;
	float *pArr = nullptr; //указатель на массив 

						   //вывод меню программы
	displaymenu();
	do {
		//проверка на цифру
		while (true)
		{
			std::cout << "---------------------------------------" << endl;
			std::cout << "<< Введите пункт меню и нажмите ввод >>" << endl;
			std::cout << "---------------------------------------" << endl;
			std::cout << ">> ";
			cin >> mitem;
			if (cin.good())
			{
				cin.ignore(10, '\n');
				break;
			}
			cin.clear();
			cout << "ОШИБКА! Введённая команда не является цифрой" << endl;
			cin.ignore(10, '\n');
		}

		//реализация обработки меню программы
		switch (mitem)
		{
		case 1:
			displaymenu();
			std::cout << " 1. Создаём файл с исходными данными" << endl;
			std::cout << "---------------------------------------" << endl;
			std::cout << "Введите имя файла:" << endl;
			cin >> FILENAME;
			st.str(""); st.clear();
			st << buffer << "\\" << FILENAME;

			//формирование имени считываемого файла путь+имя
			PATH = st.str();
			//открытия файла для чтения (файл уже создавался)
			fcreatid = filecreatid(PATH);
			if (fcreatid)//был создан
			{
			    while (true) {				
				cout << "Файл уже существует перезаписать?" << endl;
				cout << "1-Да  2-Нет" << endl;

					cin >> i;
					if (i > 2) { cout << "ОШИБКА! Введённа не верная команда" << endl; break;}
					if (cin.good())
					{
						cin.ignore(10, '\n');
						break;
					}
					cin.clear();
					cout << "ОШИБКА! Введённая команда не является цифрой" << endl;
					cin.ignore(10, '\n');
					break;
				}
				
				if (i == 1)//перезаписать
				{
						//создание файла и запись в него значений массива
						fsuccess = filecreate(PATH);

						if (!fsuccess) { std::cout << "Не удаётся создать файл " << PATH << ", для записи"; break; }
						else
						{
							while (true) {                        //5. Увеличить проверку в массив
								std::cout << "Введите количество элементов массива:" << endl;
								std::cin >> arrsize;

								if (cin.good())
								{
									cin.ignore(10, '\n');
									break;
								}
								cin.clear();
								cout << "ОШИБКА! Введённая команда не является цифрой" << endl;
								cin.ignore(10, '\n');
							}
							//выделение памяти под массив
							pArr = new(std::nothrow) float[arrsize];
							//флаг создания массива
							arrcreate = true;
							//запись в файл значений массива
							fsuccess = filewrite(PATH, &pArr[0], arrsize);
							if (!fsuccess) { std::cout << "Не удалось записать массив в файл" << endl; }
						}
				}
				else{ break;}
			}
			else //не создан
			{
					//создание файла и запись в него значений массива
					fsuccess = filecreate(PATH);

					if (!fsuccess) { std::cout << "Не удаётся создать файл " << PATH << ", для записи"; break; }
					else
					{
						while (true) {                        //5. Увеличить проверку в массив
							std::cout << "Введите количество элементов массива:" << endl;
							std::cin >> arrsize;

							if (cin.good())
							{
								cin.ignore(10, '\n');
								break;
							}
							cin.clear();
							cout << "ОШИБКА! Введённая команда не является цифрой" << endl;
							cin.ignore(10, '\n');
						}
						//выделение памяти под массив
						pArr = new(std::nothrow) float[arrsize];
						//флаг создания массива
						arrcreate = true;
						//запись в файл значений массива
						fsuccess = filewrite(PATH, &pArr[0], arrsize);
						if (!fsuccess) { std::cout << "Не удалось записать массив в файл" << endl; }
					}
			}
			
		break;

		case 2:
			displaymenu();
			std::cout << " 2. Загружаем исходные данные" << endl;
			std::cout << "---------------------------------------" << endl;

			do {
				std::cout << "Введите имя файла:" << endl;
				std::cout << ">> ";
				cin >> FILENAME;
				st.str(""); st.clear();
				st << buffer << "\\" << FILENAME;
				//формирование имени считываемого файла путь+имя
				PATH = st.str();
				//получение размера массива
				arrsize = sizearray(PATH);

				if (arrsize == 0)
				{
					std::cout << "Не удалось прочитать массив." << endl;
					std::cout << "Введите другое имя файла или ""5"" для выхода" << endl;
					std::cout << ">> ";
					cin >> fileopen;
					if (fileopen == "5") { break; }
				}
				else
				{
					//выделение памяти под массив
					if (!arrcreate)
					{
						pArr = new(std::nothrow) float[arrsize];
						arrcreate = true;
					}
					//чтение массива из файла
					fsuccess = fileread(PATH, &pArr[0], arrsize);

					if (!fsuccess)
					{
						std::cout << "Не удалось прочитать массив из файла: " << FILENAME << endl;
						arrsize = 0;
					}
					else
					{
						std::cout << "Значения массива из файла:" << endl;
						//вывод массива на экран
						outarray(&pArr[0], arrsize);
						std::cout << endl;
					}
				}
			} while (arrsize == 0);
			break;

		case 3:
			displaymenu();
			std::cout << " 3. Выводим исходные данные" << endl;
			std::cout << "---------------------------------------" << endl;

			if (arrsize != 0)
			{
				std::cout << "Значения массива из памяти:" << endl;
				//вывод массива на экран
				outarray(&pArr[0], arrsize);
				std::cout << endl;
			}
			else
			{
				std::cout << "Массив не считан. Выберите пункт меню 1 или 2" << endl;
			}

			break;

		case 4:
			displaymenu();
			std::cout << " 4. Обрабатываем данные" << endl;
			std::cout << "---------------------------------------" << endl;

			if (arrsize != 0)
			{
				std::cout << "Вывод предварительно созданного массива" << endl;
				//вывод массива на экран
				outarray(&pArr[0], arrsize);
				std::cout << endl;
				//получение позиции минимального элемента
				minpos = minvalue(&pArr[0], arrsize);
				//получение суммы элементов от x1 до xmin				
				sum = sumresult(minpos, &pArr[0], arrsize);
				//вывод результата
				std::cout << "Позиция минимального элемента массива: " << minpos << endl;
				std::cout << "Минимальный элемент массива: " << pArr[minpos] << endl;
				std::cout << "Сумма элементов от X1 до Xmin: " << sum << endl;
			}
			else
			{
				std::cout << "Массив не считан. Выберите пункт меню 1 или 2" << endl;
			}

			break;

		case 5:
			displaymenu();
			std::cout << " 5. Завершаем работу с программой" << endl;
			std::cout << "---------------------------------------" << endl;

			if (arrcreate) { delete[] pArr; }

			break;

		default:
			std::cout << "ОШИБКА! Введённая команда - " << mitem << ", не определена" << endl;
			}//case

		} while (mitem != 5);//выход

		return 0;
	}

