#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	/*..Series1◦	.Даны десять вещественных чисел.Найти их сумму
	float sum = 0, i = 1;
	float x;
	while (i <= 10) {
		cin >> x;
		sum += x;
		i++;
	}
	cout << sum << endl;
	Series2. Даны десять вещественных чисел. Найти их произведение
	float sum = 1, i = 1;
	float x;
	while (i <= 10) {
		cin >> x;
		sum *= x;
		i++;
	}
	cout << sum << endl;
	Series3.Даны десять вещественных чисел.Найти их среднее арифметическое.
	float sum = 1, i = 1;
	float x;
	while (i <= 10) {
		cin >> x;
		sum += x;
		i++;
	}
	cout << sum / 10 << endl;
	Series4.Дано целое число N и набор из N вещественных чисел.Вывести
		сумму и произведение чисtл из данного набора.
	int N;
	float sum = 0, i = 1, h = 1, X;
	cin >> N;
	while (i <= N) {
		cin >> X;
		sum += X;
		h *= X;
		i++;
	}
	cout << sum << " " << h << endl;
	Series5.Дано целое число N и набор из N положительных вещественных
		чисел.Вывести в том же порядке целые части всех чисел из данного
		набора(как вещественные числа с нулевой дробной частью), а также
		сумму всех целых частей.*/
	int N;
	float sum = 0, i = 1, X;
	cin >> N;
	while (i <= N) {
		cin >> X;
		cout << (int)X << " ";
		i++;
		sum += (int)X;

	}
	cout << sum;
	


}
