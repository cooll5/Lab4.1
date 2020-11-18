// Lab_04_1.cpp
// < Кобиринка Юрій >
// Лабораторна робота No 4.1
// Цикли
// Варіант 4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double S;
	cout << "i = "; cin >> i;
	cout << "N = "; cin >> N;
	S = 0;
	i = 1;
	while (i <= 1)
	{
		S += (1 + i / N) / pow(i, 2);
		k++;
	}
	cout << S << endl;

		S = 0;
		i = 1;
	do {
		S += (1 + i / N) / pow(i, 2);
		k++;
	} while (i <= 1);
	cout << S << endl;
	S = 0;
	for (i = 1; i <= 1; k++)
	{
		S += (1 + i / N) / pow(i, 2);
	}
	cout << S << endl;
	S = 0;
	for (k = N; i >= 1; k--)
	{
		S += (1 + i / N) / pow(i, 2);
	}
	cout << S << endl;
	return 0;
}
