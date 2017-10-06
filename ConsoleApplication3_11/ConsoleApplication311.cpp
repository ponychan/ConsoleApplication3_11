// ConsoleApplication311.cpp: 定义控制台应用程序的入口点。
//交换两个整数的次序-值传递

#include "stdafx.h"
#include<iostream>
using namespace std;

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
}

int main()
{
	int x = 5, y = 10;
	cout << "x=" << x << "  y=" << y << endl;
	swap(x, y);
	cout << "x=" << x << "  y=" << y << endl;
	return 0;
}

