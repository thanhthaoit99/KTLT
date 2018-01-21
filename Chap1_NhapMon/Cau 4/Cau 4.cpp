// Cau 4.cpp : Defines the entry point for the console application.
// Chuyen 1 mang 2 chieu thanh mot mang mot chieu
// ho ten: Le Thanh Thao
//mssv: 17110226

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void NhapMang(int a[][50], int r, int c);
void ExchangArray(int a[][50], int r, int c);
int n;

int main()
{
	int a[50][50], r, c;
	cout << "nhap hang :";
	cin >> r;
	cout << "nhap cot :";
	cin >> c;
	NhapMang(a, r, c);
	ExchangArray(a, r, c);
	cout << endl;

    return 0;
}

void NhapMang(int a[][50], int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
		{
			cout << "nhap ptu thu [" << i << "][" << j << "]";
			cin >> a[i][j];
	
		}
}

void OutputMatrix(int a[][50], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout.width(5);
			cout << a[i][j] << "  ";
		}
		cout << endl;
	}
}

void ExchangArray(int a[][50], int r, int c)
{
	int b[50];
	for (int i = 0; i <r; i++)
		for (int j = 0; j <c; j++)
		{
			b[n++] = a[i][j];
		}
	for (int k = 0; k <n; k++)
	{
		cout << b[k] << "  ";
	}
	
}