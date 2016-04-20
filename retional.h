#ifndef RET_H
#define RET_H

#include <iostream>
using namespace std;
class rat
{
	int ch;//4islitel
	int zn;//znamenatel
	friend istream &operator>>(istream&, rat&);
	friend ostream &operator<<(ostream&, rat&);
	int nod(int, int);// наибольший общий делитель
	int abs(int); // модуль числа
public:
	rat(int=0, int=1); // конструктор
	void norm(); // функция для нормализации числа // public?
	rat operator*(const rat&) const; // умножение рациональных (дробных) чисел
	rat operator+(const rat&) const; // прибавление  рациональных (дробных) чисел
};

#endif
