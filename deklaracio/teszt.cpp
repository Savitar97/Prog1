#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int a=5;
	int &r=a;
	int *d=&a;
	int *b=&r;
	cout<<a<<'\n'<<r<<'\n'<<d<<'\n'<<b<<'\n';
	r=r+2;
	cout<<a<<'\n'<<r<<'\n'<<d<<'\n'<<b<<'\n';
	return 0;
}