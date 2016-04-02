#include "stdafx.h"
#include <iostream>  
#include "retional.h" 
#include "matrix.h"
using namespace std; 
#include <cstdlib>
#include <fstream>
int main() 
{ 
	try
	{
	/*ofstream OutClientFile("myfile.dat",ios::out);
	if(!OutClientFile)
	{
		throw "file could not be opened";
	}
	rat x;
	while(cin>>x)
	{
		OutClientFile<<x;
		cout<<"?";
	}*/
	//rat a, b;//  объявление объектов типа rat   
	//cin >>a;  // ввод первого рационального числа 
	//cin >> b; // ввод второго рационального числа 
	//cout << a+b << endl; // сумма двух рациональных чисел 

	//Matrix A;
	//for(int i=0; i <A.rowCount;i++)
	//{
	//	for(int j=0; j<A.columnCount;j++)
	//	{
	//		cin>>A[i][j];
	//	}
	//}
	//Matrix B;
	//for(int i=0; i <B.rowCount;i++)
	//{
	//	for(int j=0; j<B.columnCount;j++)
	//	{
	//		cin>>B[i][j];
	//	}
	//}

	//A.getMatrix();

	Matrix A(2,2), B(2,2), C(2,2);
	C=(A+B)+(A+~B);
	//C.getMatrix();

	Matrix D(2,3), E(2,3);
	Matrix f = D+E;
	f.getMatrix();
	C=C*2;
	C.getMatrix();

	C=~C;
	C.getMatrix();
	}
	catch(char* str)
	{
		cout<<"SMTH WENT WRONG!"<<endl;
		cout<<str<<endl;
		system("pause");
		exit(-1);
	}
	system("pause");
	return 0; 

	
} 
