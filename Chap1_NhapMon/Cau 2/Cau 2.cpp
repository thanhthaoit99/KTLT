// Cau 2.cpp : Defines the entry point for the console application.
// Tim mot so trong mang da co thu tu (Binary search)
// ho ten: Le Thanh Thao
// mssv: 17110226

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void NhapMang(int a[], int n);
int BinarySearch(int a[], int n, int x);

int main()
{
	int a[50], n, x, temp;
	cout << "nhap so ptu: ";
	cin >> n;
	cout << "nhap so can tim: ";
	cin >> x;
	NhapMang(a, n);
	temp = BinarySearch(a, n, x);
	if (temp >= 0)
		cout << "da tim thay! " << endl;
	else cout << "ko tim thay!" << endl;

    return 0;
}

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap ptu thu " << i << ":";
		cin >> a[i];
	}
}


int BinarySearch(int a[], int n, int x)
{
	int start = 0, end = n - 1;
	int m = (start + end) / 2;
	int temp = -1;
	while (start < end)
	{
		int m = (start + end) / 2;
		if (x < a[m])
			end = m - 1;
		else if (x > a[m])
			start = m + 1;
		else 
		{
			temp = m;
			break;
		}
	}
	return temp;
}


