#include <stdio.h>

int main()
{
	int i;
	int tomb[5];
	for(i=0; i<5; tomb[i] = i++)
		printf("%d\n",tomb[i] );
	return 0;
	/*splint Spec file not found: forforth.lcl
forforth.c: (in function main)
forforth.c:7:27: Expression has undefined behavior (left operand uses i,
                    modified by right operand): tomb[i] = i++
  Code has unspecified behavior. Order of evaluation of function parameters or
  subexpressions is not defined, so if a value is used and modified in
  different places not separated by a sequence point constraining evaluation
  order, then the result of the expression is unspecified. (Use -evalorder to
  inhibit warning)

Finished checking --- 1 code warning*/
}