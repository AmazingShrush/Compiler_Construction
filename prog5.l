%{
	#include<stdio.h>
	#include<stdlib.h>
	int lines=0,words=0;
%}
%%
.*\n {lines++;}
" " {words++;}

%%
main(){
	extern FILE *yyin;
	yyin=fopen("input.txt","r");
	yylex();
	printf("Words: %d\n",words);
	printf("Lines: %d\n",lines);
}
int yywrap()
{
return 1;
}
