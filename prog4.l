%%
[a-zA-Z0-9]+[@][a-zA-Z]+([.][a-zA-Z]*)+  {printf("%s is Valid ",yytext);}
.* {printf("%s is Invalid!\n",yytext);}
%%
main()
{
	printf("Enter an email:");
	yylex();
}
int yywrap()
{
return 1;
}
