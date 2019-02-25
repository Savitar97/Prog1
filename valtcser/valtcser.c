#include <stdio.h>

int main()
{
int a=5,b=3;
int c=a;
a=b;
b=c;

a=a+b;
b=a-b;
a=a-b;

a=a*b;
b=a/b;
a=a/b;

a=a^b;
b=a^b;
a=a^b;

}
