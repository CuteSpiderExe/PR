#include <iostream>
#include <cstring>
using namespace std;
bool check(string w)
{
	int len = w.length();
	//Сравнение элементов
	for (int i = 0; i < len / 2; ++i)
	{
		//Получаем последний элемент строки
		if (w[i] != w[len - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	string str;
	cout << "Введите слово ";
	cin >> str;
	if (check(str))
	{
		cout << "Введенное слово полиндром";
	}
	else
	{
		cout << "Введенное слово не полиндром";
	}
	return 0;
}



