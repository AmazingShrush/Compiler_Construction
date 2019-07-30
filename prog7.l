%{

%}
%%
void|main|int|float|if|else|char {printf("%s is a keyword\n",yytext);}
%%
main(){
	printf("Enter an expression: ");
	yylex();
}
int yywrap(void){
	return 1;
}
