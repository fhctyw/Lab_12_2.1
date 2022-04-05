#include <iostream>
#include <Windows.h>
#include "Number.h"
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Number n;
	cin >> n;
	n.multiply(13.4);
	cout << n << endl;

	n++;
	++n;
	cout << n << endl;
	

	return 0;
}