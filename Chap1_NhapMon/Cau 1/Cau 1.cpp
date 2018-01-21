// Cau 1.cpp : Defines the entry point for the console application.
// Tim mot so trong mang bang linh canh
// ho ten: Le Thanh Thao
//mssv: 17110226

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void NhapMang(int a[], int n);
int FindNumber(int a[], int n, int x);

int main()
{
	int a[50], x, n;
	cout << "nhap so ptu: ";
	cin >> n;
	cout << "nhap gtri can tim: ";
	cin >> x;
	NhapMang(a, n);
	if (FindNumber(a, n, x) == 1) cout << " da tim thay!" << endl;
	else cout << "ko tim thay!" << endl;

    return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap ptu thu " << i << " : ";
		cin >> a[i];
	}
}

int FindNumber(int a[], int n, int x)
{
	a[n] = x;
	int i = 0;
	while (a[i] != x)
		i++;
	if (i < n)
		return 1;
	return 0;
}


