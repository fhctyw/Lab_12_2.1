#pragma once
#include <iostream>
using namespace std;

class Number
{
	int first;
	unsigned int second;
public:
	Number();
	Number(int f, unsigned int s);
	Number(const Number& n);
	int getFirst() const { return first; }
	unsigned int getSecond() const { return second; }

	void multiply(double value);

	operator string() const;
	Number& operator--();
	Number& operator++();
	Number operator--(int);
	Number operator++(int);
	Number& operator=(const Number& n);
	friend ostream& operator<<(ostream& out, const Number& n);
	friend istream& operator>>(istream& in, Number& n);
private:
	unsigned numberSecondDigits() const;
};
