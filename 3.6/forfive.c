#include <stdio.h>

int main()
{
	int i=0;
int da[4] = {1,2,3,4};
	int* d = da;
	int sa[4] = {5,6,7,8};
	int* s = sa;
	int n=4;
	
	for(i=0; i<n && (*d++ = *s++); ++i);
	i = 0;
	for( i=0; i<4; i++)
		printf("%d ", d[i]);

}