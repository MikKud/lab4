
#include "stdafx.h"
#include <iostream> 
#include "retional.h" 
using namespace std;
int rat::abs(int x) // модуль числа // const
{
	if(x<0) return (-1)*x; // -x работает)
	return x; 
}

int rat::nod(int x, int y)// наибольший общий делитель
{
	if(x==0 || y==0) return 1;
	while(x!=y) 
		if(x>y) 
			x=x-y; 
		else y=y-x; 
		return x; 
}
rat::rat(int x, int y) // конструктор инициализирует рац. число // по умолчанию 0/1
// uint parameters maybe?
{
if(!y || !x) 
	{
		ch=0;
		zn=1;
	} 
ch=x; 
zn=y; 
this->norm(); 
}

void rat::norm() //сокращение дроби
{  
	int sign=1;  
	if(ch*zn< 0) 
		sign=(-1); 
	ch=abs(ch);
	zn=abs(zn); 
	int b=nod(ch, zn);
	if(ch==0 || zn==0)
		zn=1; 
	if(b==1) 
		return; 
	ch=(ch/b)*sign;
	zn=zn/b;
}

rat rat::operator*(const rat& rvalue) const 
{ 
	rat temp;
	temp.ch=this->ch * rvalue.ch;
	temp.zn=this->zn * rvalue.zn;
	temp.norm();
	return temp; 
}

rat rat::operator+(const rat& rvalue) const 
{ 
	rat temp;
	temp.ch=rvalue.zn*this->ch + rvalue.ch*this->zn;
	temp.zn=this->zn * rvalue.zn;
	temp.norm();
	return temp;
}

istream &operator>>(istream &stream_in, rat &rvalue)  
{ 
	cout << "Enter rational value (a/b): ";
	stream_in >> rvalue.ch;
	stream_in.ignore();
	stream_in >> rvalue.zn;
	cout << endl; 
return stream_in; 
}

ostream &operator<<(ostream &stream_out, rat &rvalue) 
{ 
	stream_out <<  rvalue.ch << "/" << rvalue.zn ;
	return stream_out; 
}
