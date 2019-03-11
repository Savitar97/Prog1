/*
Forditas:
$ lex -o lexer.c lexer.l 

Futtatas:
$ gcc lexer.c -o lexer -lfl
(kilépés az input vége, azaz Ctrl+D)

*/
%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
  #include <ctype.h>

  #define LEXERSIZE (sizeof lexer / sizeof (struct cipher))
    
  struct cipher {
    char c;
    char *leet[4];
  } lexer [] = {

  {'a', {"α", "4", "@", "/-\\"}},
  {'b', {"ß", "8", "|3", "|}"}},
  {'c', {"©", "€", "¢", "{"}},
  {'d', {"d", "|)", "|]", "|}"}},
  {'e', {"Σ", "Œ", "3", "3"}},
  {'f', {"╒", "|=", "£", "|#"}},
  {'g', {"g", "6", "[", "[+"}},
  {'h', {"♓", "4", "|-|", "[-]"}},
  {'i', {"1", "1", "|", "!"}},
  {'j', {"⌡", "7", "_|", "_/"}},
  {'k', {"k", "|<", "1<", "|{"}},
  {'l', {"l", "1", "|", "|_"}},
  {'m', {"m", "44", "(V)", "|\\/|"}},
  {'n', {"π", "|\\|", "/\\/", "/V"}},
  {'o', {"σ", "0", "()", "[]"}},
  {'p', {"p", "/o", "|D", "|o"}},
  {'q', {"q", "9", "O_", "(,)"}},
  {'r', {"®", "Γ", "12", "|2"}},
  {'s', {"s", "5", "$", "$"}},
  {'t', {"†", "╤", "τ", "'|'"}},
  {'u', {"µ", "|_|", "(_)", "[_]"}},
  {'v', {"v", "\\/", "\\/", "\\/"}},
  {'w', {"w", "VV", "\\/\\/", "(/\\)"}},
  {'x', {"x", "%", ")(", ")("}},
  {'y', {"y", "¥", "", ""}},
  {'z', {"z", "2", "7_", ">_"}},
  
  {'0', {"Ω", "○", "º", "☺"}},
  {'1', {"I", "I", "L", "L"}},
  {'2', {"Z", "Z", "Z", "e"}},
  {'3', {"E", "E", "E", "E"}},
  {'4', {"h", "h", "A", "A"}},
  {'5', {"S", "S", "S", "S"}},
  {'6', {"b", "b", "G", "G"}},
  {'7', {"T", "T", "j", "j"}},
  {'8', {"X", "X", "X", "X"}},
  {'9', {"g", "g", "j", "j"}}
  
// https://simple.wikipedia.org/wiki/Leet
  };
  
%}
%%
. {
    
    int found = 0;
    for(int i=0; i<LEXERSIZE; ++i)
    {
    
      if(lexer[i].c == tolower(*yytext))
      {
      
        int r = 1+(int) (100.0*rand()/(RAND_MAX+1.0));
      
          if(r<91)
          printf("%s", lexer[i].leet[0]);
          else if(r<95)
          printf("%s", lexer[i].leet[1]);
        else if(r<98)
          printf("%s", lexer[i].leet[2]);
        else 
          printf("%s", lexer[i].leet[3]);

        found = 1;
        break;
      }
      
    }
    
    if(!found)
       printf("%c", *yytext);   
    
  }
%%
int 
main()
{
  srand(time(NULL)+getpid());
  yylex();
  return 0;
}
