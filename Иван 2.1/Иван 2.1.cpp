// Иван 2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2;

	cout << "Введите координаты: ";

	cin >> x1; 
	cin >> y1; 
	cin >> x2;
	cin >> y2;
	cout << sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return 0;
}