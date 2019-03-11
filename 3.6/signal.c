#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void jelkezelo(int a)
{
	printf("AhAhAhAhAh!\n");
}

int main()
{
	for(;;)
	{
		if(signal(SIGINT, jelkezelo) != SIG_IGN)
		{
			signal(SIGINT,SIG_IGN);
		}
	}
}
