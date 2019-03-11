#include <stdio.h>

int main()
{
	int i;
	for(i=0; i<5; ++i)//prefix
		printf("%d\n",i );
	for(i=0; i<5; i++)//postfix
		printf("%d\n",i );
	return 0;
	//splint no warning
}