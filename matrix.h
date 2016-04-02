#pragma once
#pragma once
#ifndef MATRIX_H
#define MATRIX_H
#include "stdafx.h"
#include <iomanip>
using namespace std;
#include "retional.h"

class Matrix {
    public:
        int rowCount;
        int columnCount;
        int size;
        rat **ptr;
    public:
        Matrix();
        Matrix(int, int);
        ~Matrix();
        void setMatrix();
        void getMatrix();
        rat* operator[](int subscript);
       Matrix& operator+( Matrix &M) ;
   Matrix& operator=( Matrix& M);
        Matrix& operator *(int);
        rat *minPositive();
		Matrix& operator~();
};




Matrix::Matrix() {
    printf("Enter lines: ");
    cin >> rowCount;
    printf("Enter columns: ");
    cin >> columnCount;
    ptr = new rat*[rowCount];
    for (int i = 0; i < rowCount; i++) {
        ptr[i] = new rat[columnCount];
    }
}


Matrix::Matrix(int rowSize, int columnSize) {
    rowCount = rowSize;
    columnCount = columnSize;
   ptr = new rat*[rowCount];
    for (int i = 0; i < rowCount; i++) {
        ptr[i] = new rat[columnCount];
    }
}


Matrix::~Matrix() {
    delete[] ptr;
}




void Matrix::getMatrix() {
    for (int i = 0; i < rowCount; i++) {
		cout<<endl;
        for (int j = 0; j < columnCount; j++) {
            cout << setw(4) << ptr[i][j] <<"  ";
        }
    }
}

rat* Matrix::operator[](int subscrtipt)
{
    size = rowCount + columnCount;
    if (subscrtipt < 0 || subscrtipt >= size) {
        cerr << "\n Ошибка индекса: " << subscrtipt << endl;
        exit(1); 
    }
    return ptr[subscrtipt]; 
}




Matrix& Matrix::operator+( Matrix &M) 
{
    static Matrix rezult(rowCount, columnCount);
	if(rowCount==M.rowCount && columnCount==M.columnCount)
	{
		for(int i=0;i<rowCount;i++)
			for(int j=0;j<columnCount;j++)
			{
				rezult[i][j]=ptr[i][j]+M[i][j];

				
			}
			return rezult;
	}
	else
	{
		throw  "+ is not working";
	}
}

Matrix& Matrix::operator=(Matrix &M)
{
	if(rowCount==M.rowCount && columnCount==M.columnCount)
	{
	for(int i=0;i<rowCount;i++)
			for(int j=0;j<columnCount;j++)
			{
				ptr[i][j]=M[i][j];

			}
			return *this;
	}
	else
		throw "= is not working";
}
Matrix& Matrix::operator~()
{
	static Matrix rezult2(rowCount, columnCount);
	for(int i=0;i<rowCount;i++)
			for(int j=0;j<columnCount;j++)
			{
				rezult2[i][j]=ptr[j][i];

				
			}
			return rezult2;
}

Matrix& Matrix::operator *(int k) 
{
   static Matrix rezult1(rowCount, columnCount);
	
	
		for(int i=0;i<rowCount;i++)
			for(int j=0;j<columnCount;j++)
			{
				rezult1[i][j]=ptr[i][j]*k;

				
			}
			return rezult1;
	
	
}


#endif
