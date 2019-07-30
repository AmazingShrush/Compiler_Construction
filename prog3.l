%{
	int v=0;
%}
%%
[a e i o u A E I O U] {printf("\t%s is a vowel\n",yytext); v++;}
[a-z A-Z] {printf("\t%s is a consonent\n",yytext);}
%%
int yywrap(void){
	return 1;
}
main(){
	printf("Enter a string:");
	yylex();
	printf("No. of vowels are: %d\n",v);

}
