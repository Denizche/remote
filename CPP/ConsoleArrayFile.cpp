// ConsoleArrayFile.cpp: ���������� ����� ����� ��� ����������� ����������.
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

//������� ������ ����
void displaymenu()
{
	system("cls"); //������� ������
	
	std::cout << " 1. ������� ���� � ��������� ������� " << endl;
	std::cout << " 2. ��������� �������� ������        " << endl;
	std::cout << " 3. ������� �������� ������          " << endl;
	std::cout << " 4. ���������� ������                " << endl;
	std::cout << " 5. ��������� ������ � ����������    " << endl;
	
}
//������� �������� ������� �����
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
//������� �������� �����
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
//������� �������� ���-�� ��������� ������� � �����
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
//������� ������ ������� � ����
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
			st << "������� " << i + 1 << "-� ������� �������";
			std::cout << st.str() << endl;
			std::cin >> pArr[i];

				if (cin.good())
				{
					cin.ignore(10, '\n');
					break;
				}
				cin.clear();
				cout << "������! �������� ������� �� �������� ������" << endl;
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
//������� ������ ������� �� �����
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

			file_in >> digit; //������ ���������� �������� �� ������ file_in � ���������� digit 
			pArr[i] = digit; //��������� ������ ������� �� �����
		}
		file_in.close();
	}

	return fread;
}
//������� ������ ������� �� �����
void outarray(float *pArr, int arrsize)
{
	for (int i = 0; i < arrsize; i++)
	{
		std::cout << pArr[i] << setw(6); //����� �������
	}
}
//������� ���������� ������������ ��������
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
//������� ���������� ����� �� ������������ ��������
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
	//--------------------��������� � �������---------------------//
	setlocale(LC_ALL, "rus");
	//-----��������� ���� ����� - ���� � ���������� �������--------//
	char* buffer = new char[MAX_PATH];
	GetCurrentDirectoryA(MAX_PATH, buffer);

	string FILENAME, PATH = "", fileopen;
	stringstream st;
	int arrsize = 0, mitem, minpos, i;
	bool fsuccess = false; bool arrcreate = false, fcreatid = false;//����� ���������
	float min = 0, sum = 0;
	float *pArr = nullptr; //��������� �� ������ 

						   //����� ���� ���������
	displaymenu();
	do {
		//�������� �� �����
		while (true)
		{
			std::cout << "---------------------------------------" << endl;
			std::cout << "<< ������� ����� ���� � ������� ���� >>" << endl;
			std::cout << "---------------------------------------" << endl;
			std::cout << ">> ";
			cin >> mitem;
			if (cin.good())
			{
				cin.ignore(10, '\n');
				break;
			}
			cin.clear();
			cout << "������! �������� ������� �� �������� ������" << endl;
			cin.ignore(10, '\n');
		}

		//���������� ��������� ���� ���������
		switch (mitem)
		{
		case 1:
			displaymenu();
			std::cout << " 1. ������ ���� � ��������� �������" << endl;
			std::cout << "---------------------------------------" << endl;
			std::cout << "������� ��� �����:" << endl;
			cin >> FILENAME;
			st.str(""); st.clear();
			st << buffer << "\\" << FILENAME;

			//������������ ����� ������������ ����� ����+���
			PATH = st.str();
			//�������� ����� ��� ������ (���� ��� ����������)
			fcreatid = filecreatid(PATH);
			if (fcreatid)//��� ������
			{
			    while (true) {				
				cout << "���� ��� ���������� ������������?" << endl;
				cout << "1-��  2-���" << endl;

					cin >> i;
					if (i > 2) { cout << "������! ������� �� ������ �������" << endl; break;}
					if (cin.good())
					{
						cin.ignore(10, '\n');
						break;
					}
					cin.clear();
					cout << "������! �������� ������� �� �������� ������" << endl;
					cin.ignore(10, '\n');
					break;
				}
				
				if (i == 1)//������������
				{
						//�������� ����� � ������ � ���� �������� �������
						fsuccess = filecreate(PATH);

						if (!fsuccess) { std::cout << "�� ������ ������� ���� " << PATH << ", ��� ������"; break; }
						else
						{
							while (true) {                        //5. ��������� �������� � ������
								std::cout << "������� ���������� ��������� �������:" << endl;
								std::cin >> arrsize;

								if (cin.good())
								{
									cin.ignore(10, '\n');
									break;
								}
								cin.clear();
								cout << "������! �������� ������� �� �������� ������" << endl;
								cin.ignore(10, '\n');
							}
							//��������� ������ ��� ������
							pArr = new(std::nothrow) float[arrsize];
							//���� �������� �������
							arrcreate = true;
							//������ � ���� �������� �������
							fsuccess = filewrite(PATH, &pArr[0], arrsize);
							if (!fsuccess) { std::cout << "�� ������� �������� ������ � ����" << endl; }
						}
				}
				else{ break;}
			}
			else //�� ������
			{
					//�������� ����� � ������ � ���� �������� �������
					fsuccess = filecreate(PATH);

					if (!fsuccess) { std::cout << "�� ������ ������� ���� " << PATH << ", ��� ������"; break; }
					else
					{
						while (true) {                        //5. ��������� �������� � ������
							std::cout << "������� ���������� ��������� �������:" << endl;
							std::cin >> arrsize;

							if (cin.good())
							{
								cin.ignore(10, '\n');
								break;
							}
							cin.clear();
							cout << "������! �������� ������� �� �������� ������" << endl;
							cin.ignore(10, '\n');
						}
						//��������� ������ ��� ������
						pArr = new(std::nothrow) float[arrsize];
						//���� �������� �������
						arrcreate = true;
						//������ � ���� �������� �������
						fsuccess = filewrite(PATH, &pArr[0], arrsize);
						if (!fsuccess) { std::cout << "�� ������� �������� ������ � ����" << endl; }
					}
			}
			
		break;

		case 2:
			displaymenu();
			std::cout << " 2. ��������� �������� ������" << endl;
			std::cout << "---------------------------------------" << endl;

			do {
				std::cout << "������� ��� �����:" << endl;
				std::cout << ">> ";
				cin >> FILENAME;
				st.str(""); st.clear();
				st << buffer << "\\" << FILENAME;
				//������������ ����� ������������ ����� ����+���
				PATH = st.str();
				//��������� ������� �������
				arrsize = sizearray(PATH);

				if (arrsize == 0)
				{
					std::cout << "�� ������� ��������� ������." << endl;
					std::cout << "������� ������ ��� ����� ��� ""5"" ��� ������" << endl;
					std::cout << ">> ";
					cin >> fileopen;
					if (fileopen == "5") { break; }
				}
				else
				{
					//��������� ������ ��� ������
					if (!arrcreate)
					{
						pArr = new(std::nothrow) float[arrsize];
						arrcreate = true;
					}
					//������ ������� �� �����
					fsuccess = fileread(PATH, &pArr[0], arrsize);

					if (!fsuccess)
					{
						std::cout << "�� ������� ��������� ������ �� �����: " << FILENAME << endl;
						arrsize = 0;
					}
					else
					{
						std::cout << "�������� ������� �� �����:" << endl;
						//����� ������� �� �����
						outarray(&pArr[0], arrsize);
						std::cout << endl;
					}
				}
			} while (arrsize == 0);
			break;

		case 3:
			displaymenu();
			std::cout << " 3. ������� �������� ������" << endl;
			std::cout << "---------------------------------------" << endl;

			if (arrsize != 0)
			{
				std::cout << "�������� ������� �� ������:" << endl;
				//����� ������� �� �����
				outarray(&pArr[0], arrsize);
				std::cout << endl;
			}
			else
			{
				std::cout << "������ �� ������. �������� ����� ���� 1 ��� 2" << endl;
			}

			break;

		case 4:
			displaymenu();
			std::cout << " 4. ������������ ������" << endl;
			std::cout << "---------------------------------------" << endl;

			if (arrsize != 0)
			{
				std::cout << "����� �������������� ���������� �������" << endl;
				//����� ������� �� �����
				outarray(&pArr[0], arrsize);
				std::cout << endl;
				//��������� ������� ������������ ��������
				minpos = minvalue(&pArr[0], arrsize);
				//��������� ����� ��������� �� x1 �� xmin				
				sum = sumresult(minpos, &pArr[0], arrsize);
				//����� ����������
				std::cout << "������� ������������ �������� �������: " << minpos << endl;
				std::cout << "����������� ������� �������: " << pArr[minpos] << endl;
				std::cout << "����� ��������� �� X1 �� Xmin: " << sum << endl;
			}
			else
			{
				std::cout << "������ �� ������. �������� ����� ���� 1 ��� 2" << endl;
			}

			break;

		case 5:
			displaymenu();
			std::cout << " 5. ��������� ������ � ����������" << endl;
			std::cout << "---------------------------------------" << endl;

			if (arrcreate) { delete[] pArr; }

			break;

		default:
			std::cout << "������! �������� ������� - " << mitem << ", �� ����������" << endl;
			}//case

		} while (mitem != 5);//�����

		return 0;
	}

