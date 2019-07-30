%{

%}
%%
<|>|<=|>=|==|<> {printf("%s is a relational operator\n",yytext);}
.* {printf("Not a valid PASCAL relational operator.\n");
%%
main(){
	printf("Enter an operator:");
 	yylex();
}
int yywrap(void){
	return 1;
}
