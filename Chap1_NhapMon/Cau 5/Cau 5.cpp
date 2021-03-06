// Cau 5.cpp : Defines the entry point for the console application.
// Chuyen mang 1 chieu thanh 2 chieu

#pragma region library
	#include "stdafx.h"
	#include <iostream>
	#include <conio.h>
	#include <math.h>
	#include <string>
	#include <ctime>
	// library for random number
	#include <stdlib.h>     
	#include <time.h>
	using namespace std;
#pragma endregion

#pragma region InputOutputArray
	void InputArray(int a[], int m, int n)
	{
		for (int i = 0; i < m*n; i++)
		{
			cout << "nhap ptu thu " << i << ":";
			cin >> a[i];
		}
	}
	void InputMatrix(int a[][50], int r, int c)
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
			{
				cout << "nhap ptu thu a[" << i << "]" << "[" << j << "]";
				cin >> a[i][j];
			}
	}
	void RandomArray(int a[], int n)
	{
		srand(time_t(NULL));
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 100 + 1;
		}
	}
	void RandomMatrix(int a[][50], int r, int c)
	{
		srand(time_t(NULL));
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				a[i][j] = rand() % 100 + 1;
			}
		}
	}
	void OutputArray(int a[], int n)
	{
		cout << endl << " Mang 1 chieu " << endl;
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << "  ";
		}

	}
	void OutputMatrix(int a[][50], int r, int c)
	{
		cout << endl << " Mang 2 chieu " << endl;
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
#pragma endregion

void ExchangArray2(int a[], int m, int n,int b[][50]);

int main()
{
	int a[50],b[50][50], m, n;	
	cout << "nhap m: ";
	cin >> m;
	cout << "nhap n: ";
	cin >> n;

	RandomArray(a, m*n);
	OutputArray(a, m*n);
	ExchangArray2(a, m, n,b);
	OutputMatrix(b, m, n);

    return 0;
}

void ExchangArray2(int a[], int m, int n, int b[][50])
{
	int i = 0;
	for (int h = 0; h < m; h++)
	{
		for (int k = 0; k < n; k++)
		{
			b[h][k] = a[i++];
		}
	}
}

