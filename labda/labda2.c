#include <stdio.h>
#include <unistd.h>

void rajzol(int x,int y,char labda);

int main()
{
	char labda='o';
	int x=80,y=15,labdax=1,labday=1,tempx=1,tempy=1;
	for(;;)
	{
		labdax+=tempx;
		labday+=tempy;
		if(x-1<=labdax)
		{
			tempx*=-1;
		}
		else if(y-1<=labday)
		{
			tempy*=-1;
		}
		else if(labdax<0)
		{
			tempx*=-1;
		}
		else if(labday<0)
		{
			tempy*=-1;
		}
		rajzol(labdax,labday,labda);
		usleep(100000);
	}

}

void rajzol(int x,int y,char labda)
{
	system("clear");
	for (int i = 0; i < y; ++i)
	{
		printf("%c",'\n');
	}
	for (int i = 0; i < x-1; ++i)
	{
		printf("%c",' ');	
	}
	printf("%c%c",labda,'\n');
}
