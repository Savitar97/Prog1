#include <stdio.h>
#include<iostream>

using namespace std;

int *h();
int *(*l) ();
int (*v (int c)) (int a, int b);
int (*(*z) (int)) (int, int);


int main()
{
	int a;
	int *b=&a;
	int &r=a;
	int c[5];
	int (&tr)[5]=c;
	int *d[5];
	cout<<a<<'\n'<<b<<'\n'<<r<<'\n'<<v<<'\n';
	return 0;

}