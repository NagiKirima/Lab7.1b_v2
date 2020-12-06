#include <iostream>
#include <string>
using namespace std;

int SizeCheck()
{
	int size;
	while (!(cin >> size) || (cin.peek() != '\n') || size < 1)
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "������� ���������� ����� :";
	}
	return size;
}


template <typename t>
int FindA(t s, int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		if ((s[i] == 'a' && i == 0) || (s[i] == 'a' && s[i - 1] == '_'))
		{
			k++;
		}
	}

	return k;
}


void FillArray(char* s, int length)
{
	cout << endl << "��������� ������ �����������:" << endl;
	for (int i = 0; i < length; i++)
	{
		cout << "������� " << i+1 << "-�� ������� ������: \t";
		cin >> s[i];
		cout << endl;
	}
}


int main()
{
	setlocale(LC_ALL, "rus");

	int slength;
	cout << "������� ����� 1 ������:\t";
	slength = SizeCheck();
	char* s = new char[slength];
	FillArray(s, slength);


	string s2;
	cout << "������� 2 ������:\t";
	cin >> s2;
	int size = s2.length();
	cout << endl << endl;

	cout << "� ������ ������:\t" << FindA(s, slength) << endl;
	cout << "�� ������ ������:\t" << FindA(s2, size) << endl;
	delete[] s;
}