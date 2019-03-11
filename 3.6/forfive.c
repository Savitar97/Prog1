#include <stdio.h>

int main()
{
	int i=0;
int a[4] = {10,15,20,25};
	int* d = a;
	int b[4] = {1,2,3,4};
	int* s = b;
	int n=4;
	
	for(i=0; i<n && (*d++ = *s++); ++i);
	i = 0;
	for( i=0; i<4; i++)
		printf("%d ", d[i]);
	return 0;
}