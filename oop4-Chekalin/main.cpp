#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <cmath>
#include "Header.h"
using namespace std;
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, b, m, n;
	cout << "Введите значения а и b: \n";
	cin >> a >> b;
	n = findN(a, b);
	m = findM(a, b, n);
	cout << "a = " << a << "  b = " << b << "  n = " << n << "  m = " << m;
}