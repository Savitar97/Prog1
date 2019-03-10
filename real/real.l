%{
#include <stdio.h>
int counter = 0;
%}
digit	[0-9]
%%
{digit}*(\.{digit}+)?	{++counter; 
    printf("[realnum=%s %f]", yytext, atof(yytext));}
%%
int
main ()
{
 yylex ();
 printf("Valós számok száma:[ %d]\n", counter);
 return 0;
}
