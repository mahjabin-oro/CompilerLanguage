%{
#include <stdio.h>
void showError();
#define yywrap() 1
#include <stdlib.h>
#include<string.h>
#include "ztwo.tab.h" 

%}


%%
"startcompile"	    {return STRT;}
"endcompile"		{return END;}
"int"	            {return INT;}
"intpointint"		{return DOUBLE;}
"letters"		    {return TEXT;}
"dimention"		    {return ARR;}
"add"		        {return ADD;}
"sub"		        {return SUB;}
"into" 	            {return MUL;}
"div"		        {return DIV;}
"mod"		        {return MOD;}
"power"	            {return POWER;}
"abs"		        {return ABS;}
"fact"	            {return FACT;}
"up"		        {return INC;}
"low"		        {return DEC;}
"ee"		        {return EQU;}
"g"		            {return GRT;}
"l"		            {return LES;}
"ge"	            {return GRT_EQU;}
"le"	            {return LES_EQU;}
"ne"	            {return NOT_EQU;}
"or"		        {return OR;}
"and"		        {return AND;}
"not"		        {return NOT;}
"<"                 {return ALB;}
">"                 {return ARB;}
"<<-"               {return ASGN;}
"||"                {return DIVIDER;}
"whether"           {return IF;}
"else"              {return ELSE;}
"orif"              {return ELIF;}
[(]			        {return LP;}
[)]			        {return RP;}
"{"                 {return LB;}
"}"                 {return RB;}
"match"             {return SWITCH;}
"option"            {return CASE;}
"finaloption"       {return DEFAULT;}
"till"		        {return FROM;}
"until"             {return WHILE;}
"repeat"            {return DO;}
"range"             {return RANGE;}
"write"             {return PRINT;}
"read"              {return SCAN;}
":"                 {return CLN;}
[ \n\t]*	;
"/nl/"		        {return NL;}



"**"[^\n\r]+					{ 

	yylval.text = strdup(yytext);
	return SLC; 
}



[*][^\*]+[*] 					{ 

	yylval.text = strdup(yytext);
	return MLC; 
}



[A-Z|a-z]+[a-zA-Z0-9_]*		{ 

	yylval.text = strdup(yytext);
 	return VAR;
 }  




\'[^'\\\*"]*\' 	{ 
    yytext[strlen(yytext)-1] = NULL;
	yylval.text = strdup(yytext+1);
	 //printf("%s\n",yylval);
	return STRING ; 
}
[;]			{return SM;}
","			{return CM;}

[+|-]?[0-9]+ 				{
	
	yylval.integer = atoi(yytext); 	
	return INT_NUM;
}

[+|-]?[0-9]+[.][0-9]+		{

	yylval.real = atof(yytext);
	return REAL_NUM;
}			
%%