//gcc vegtelen3.c -o vegtelen3 -fopenmp

#include <stdio.h>


int main()
{
#pragma omp parallel
while(1)
	{};
return (0);

}