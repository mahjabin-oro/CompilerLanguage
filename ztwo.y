%{

# include<stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <math.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdint.h>


int yylex(void);
void yyerror(char*);
int alredyDeclared[500];
char var[500][20]; 
int record_int[500];
double record_double[500];
char *record_text[500];
int arr_int[10000];
double arr_real[10000];
int maincase,subcase;
double dmaincase, dsubcase;

int i, temp=0, aisize=0, adsize=0;
int check_var(char *v)
{
    for(i=0;i<temp;i++)
    {
        if(strcmp(v,var[i])==0)
        {
            return i;
        }
    }
    return -1;
}


%}
%union{
  int integer;
  double real;
  char *text;
}

%token  INT DOUBLE TEXT STRT END NL ASGN SLC MLC VAR STRING SM CM INT_NUM REAL_NUM ARR ALB ARB LP RP PRINT DIVIDER SCAN ADD SUB MUL DIV MOD POWER ABS FACT INC DEC EQU GRT LES GRT_EQU LES_EQU NOT_EQU OR AND NOT IF ELSE ELIF LB RB SWITCH CASE DEFAULT CLN FROM WHILE DO RANGE 
%type <text>      VAR STRING SLC MLC INT DOUBLE TEXT 
%type <integer> INT_NUM assignment asgn_stmt assign_array PRINT SCAN ADD SUB MUL DIV MOD POWER ABS FACT INC DEC EQU GRT LES GRT_EQU LES_EQU NOT_EQU OR AND NOT
%type <integer>   array_int array_real  ALB ARB LP RP DIVIDER if_stmt  elif_stmt elif_stmts switch_stmts def_stmt case_stmt case_stmts LB RB loop_stmts for_loop while_loop dowhile_loop
%type <real>      REAL_NUM expr
%nonassoc IF
%nonassoc ELIF
%nonassoc ELSE
%right ASGN
%left ABS
%left FACT
%left ADD 
%left SUB
%left MUL 
%left DIV
%left MOD
%left POWER
%left INC 
%left DEC
%left NOT
%left LES
%left GRT
%left LES_EQU
%left GRT_EQU
%left EQU
%left NOT_EQU
%left OR 
%left AND
%left LB RB
%left ALB ARB
%left LP RP

%%

program: STRT statements END 		{ printf("\nCompiled Successfully.\n"); }
;
statements: statement                     /*{ printf("\nStatement Ran Successfully.\n"); }*/
| statements statement                    /*{ printf("\nAll Statements Ran Successfully.\n"); }*/
;

statement: SM
| SLC                           {
  printf("\nSingle Line Comment: %s\n\n", $1);
}
| MLC                           {
  printf("\nMulti Line Comment: %s\n\n" , $1);
}
| NL                        {printf("\n");}
| declaration SM 					{ printf("\nSuccessful Declaration\n"); }
| assignment SM                { printf("\nSuccessful Assignment\n"); }
| expr SM                  /*{ printf("%lf\n",$1); }*/
| assign_array SM
| special ;

declaration: INT int_ids 			{ printf("Successful Integer Declaration.\n"); }
|DOUBLE real_ids					    { printf("Successful Real Number Declaration.\n"); }
|TEXT text_ids                { printf("Successful Text Declaration.\n"); }
|array_int                    { printf("Successful Integer Array Declaration.\n"); }
|array_real                   { printf("Successful Real Array Declaration.\n"); }

;
//integer declaretion-----------------------------------------
int_ids: int_ids CM VAR {
int idx = check_var($3);
if(idx!=-1)
{
    printf("%s is already declared\n", $3);
}
else{
    strcpy(var[temp],$3);
    alredyDeclared[temp]=1;
    temp++;
}
}
| int_ids CM VAR ASGN expr		{

	int idx = check_var($3);

	if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    int x = (int)$5 ;
    strcpy( var[temp] , $3 );
    alredyDeclared[temp] = 1;
    record_int[temp] = x ;
    /*printf("%dth variable %s = %d\n" ,temp, $3 , x);*/
    temp++;

   }

	}
| VAR {
    int idx = check_var($1);
    if(idx!=-1)
    {
        printf("%s already declared\n",$1);
    }
    else
    {
        strcpy(var[temp],$1);
    alredyDeclared[temp]=1;
    temp++;
    }
}
| VAR ASGN expr					{

	int idx = check_var($1);
  /*printf("idx = %d\n", idx);*/

  if(idx!=-1)
  {
   printf("%s is already declared!\n", $1);
  }
  else{

    int x = (int)$3 ;
    strcpy( var[temp] , $1) ;
    alredyDeclared[temp] = 1;
    record_int[temp] = x ;

    /*printf("%dth variable %s = %d\n" ,temp, $1 , x);*/
    temp++;

   }

	}
;
//double declaration-----------------------------------------------
real_ids: real_ids CM VAR {
    int idx = check_var($3);
    if(idx!=-1)
    {
        printf("%s variable already declared",$3);
    }
    else
    {
        strcpy(var[temp],$3);
        alredyDeclared[temp]=2;
        temp++;
    }
}
| real_ids CM VAR ASGN expr    {

  int idx = check_var($3);
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    double x = $5 ;
    strcpy( var[temp] , $3 );
    alredyDeclared[temp] = 2;
    record_double[temp] = x ;
    printf("%s variable double declared",$3);
    /*printf("%dth variable %s = %lf\n" ,temp, $3 , x);*/ 
    temp++;

   }

  }
| VAR ASGN expr         {

  int idx = check_var($1);
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n", $1);
  }
  else{

    double x = $3 ;
    strcpy( var[temp] , $1) ;
    alredyDeclared[temp] = 2;
    record_double[temp] = x ;

    /*printf("%dth variable %s = %lf\n" ,temp, $1 , x);*/
    temp++;

   }

  }  
| VAR {
    int idx = check_var($1);
    if(idx!=-1)
    {
        printf("%s already declared\n",$1);
    }
    else
    {
        strcpy(var[temp],$1);
    alredyDeclared[temp]=2;
    temp++;
    }
}
;
//character declaration-----------------------------------
text_ids: text_ids CM VAR {
    int idx = check_var($3);
 if(idx!=-1)
    {
        printf("%s variable already declared",$3);
    }
    else
    {
        strcpy(var[temp],$3);
        alredyDeclared[temp]=3;
        temp++;
    }
}
| text_ids CM VAR ASGN STRING    {

  int idx = check_var($3);
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    strcpy( var[temp] , $3 );
    alredyDeclared[temp] = 3;

   record_text[temp] = (char *) malloc ( sizeof(char)*(strlen($5) + 1) );
   
    strcpy(record_text[temp] , $5);

    /*printf("%dth VARiable %s = %s\n" ,temp, $3 ,record_text[temp]);*/
    temp++;

   }

  }

| VAR ASGN STRING         {

  int idx = check_var($1);
  

  if(idx!=-1)
  {
   printf("%s is already declared!\n", $1);
  }
  else{

    
    strcpy( var[temp] , $1) ;
    alredyDeclared[temp] = 3;

   record_text[temp] = (char*) malloc ( sizeof(char)*(strlen($3) ) );

    strcpy(record_text[temp] , $3);

    /* printf("%dth VARiable %s = %s\n" ,temp, $1 ,record_text[temp]); */
    temp++;

   }}
| VAR {
    int idx = check_var($1);
    if(idx!=-1)
    {
        printf("%s already declared\n",$1);
    }
    else
    {
        strcpy(var[temp],$1);
    alredyDeclared[temp]=3;
    temp++;
    }
}
;
//int array declaration------------------------------------
array_int : INT ARR VAR ALB INT_NUM ARB       {
  
  int idx = check_var($3);
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    strcpy( var[temp] , $3) ;
    alredyDeclared[temp]=99;

    record_int[temp]= aisize;
    aisize+=$5;
   printf("%dth variable %s is being declared!\n" ,temp, $1);
    temp++;
   }
}
;
//double array declaration-------------
array_real : DOUBLE ARR VAR ALB INT_NUM ARB       {
  
  int idx = check_var($3);
  
  if(idx!=-1)
  {
   printf("%s is already declared!\n" , $3);
  }
  else{

    strcpy( var[temp] , $3) ;
    alredyDeclared[temp]=100;

    record_int[temp]= adsize;
    adsize+=$5;

    /*printf("%dth variable %s is being declared!\n" ,temp, $1);*/
    temp++;
   }
}

;
//value assignments-------------------------------------------
assignment: assignment CM asgn_stmt
| asgn_stmt

asgn_stmt: VAR ASGN expr       {
  
  int idx = check_var($1);

  if(idx==-1){
    printf("Variable %s has not been Declared Yet\n", $1);
  }
  else {
    if(alredyDeclared[idx]==1){

        int x = (int) $3 ;
        record_int[idx] = x ;
        /*printf("%s = %d\n", $1, x);*/
    }
    else if(alredyDeclared[idx]==2){

        double x = $3 ;
        record_double[idx] = x ;
        /*printf("%s = %lf\n", $1, x);*/
    }
  }
}
| VAR ASGN STRING            {
  
  int idx = check_var($1);

  if(idx==-1){
    printf("Variable %s has not been Declared Yet\n", $1);
  }
  else {
    record_text[idx] = (char*) malloc ( sizeof(char)*(strlen($3)) );

    strcpy(record_text[idx] , $3);
    /*printf("%s = %s\n", $1, $3);*/
    }
}
| assign_array

;
assign_array: VAR ALB INT_NUM ARB ASGN expr {
    int idx = check_var($1);
    if(idx==-1)
    {
        printf("%s is not declared yet",$1);
    }
    else{
        if(alredyDeclared[idx]==99)
        {
            int x = record_int[idx];
            x+= $3;
            int y= (int) $6;
            arr_int[x]=y;
        }
        else if(alredyDeclared[idx]==100)
        {
            int x= record_int[idx];
            x+= $3;
            double y =$6;
            arr_real[x]=y;
        }
        else{
            printf("not array\n");
        }
    }
}
| VAR ALB VAR ARB ASGN expr {
    int idx=check_var($1);
    if(idx==-1)
    {
       printf("%s is not declared yet",$1);  
    }
    else{
        if(alredyDeclared[idx]==99)
        {
            int x=record_int[idx];
            int idx1 =check_var($3);
            if(idx1==-1)
            {
                printf("%s is not declared yet",$3); 
            }
            else{ 
            if(alredyDeclared[idx1]==1)
            {
                x+=record_int[idx1];
            }

            }
            int y = (int)$6;
            arr_int[x]=y;
        }
        else if(alredyDeclared[idx]==100)
        {
            int x = record_int[idx];
      
      int idx1 = check_var($3);
      if(idx1==-1)
      {
        printf("%s is not declared yet!\n" , $3);
      }
      else {
        if(alredyDeclared[idx1]==1){
          x+=record_int[idx1];
        }
      }

      double y = $6 ;
      arr_real[x] = y;
    }
  else {
      printf("Improper Data Type.Not Array\n");
        }
    }
}

;
//switch implementation-------------------------------


switch_stmts: SWITCH INT_NUM CLN LB case_stmts RB          {
  
  maincase =(int)$2;
  //printf ("Inside switch statement int %d",maincase);
  
  
}
| SWITCH REAL_NUM CLN LB case_stmts RB {
  dmaincase=$2;
   printf ("Inside switch statement double");

}
| SWITCH STRING CLN LB case_stmts RB {
   record_text[450] = (char*) malloc ( sizeof(char)*(strlen($2)) );
   strcpy(record_text[450] , $2);
   printf ("Inside switch statement string");

}
| SWITCH VAR CLN case_stmts RB {
 
 printf ("Inside switch statement with variable name");
}
| VAR
{
    int idx = check_var($1);
    if(alredyDeclared[idx]==-1)
    {
        printf("variable not declared yet");
    }
    else if(alredyDeclared[idx]==1)
    {
        int value = record_int[idx];
        int maincase = (int)value;
    }
    else if(alredyDeclared[idx] == 2)  { 

    dmaincase= record_double[idx];
}
    else if(alredyDeclared[idx] == 3)  { 

    int length = strlen(record_text[450]);
    char* str = malloc( length + 1 );
    strcpy(str, record_text[450]);
}

}
;
case_stmts: case_stmt
| case_stmt def_stmt
| case_stmt case_stmts

;
case_stmt: CASE INT_NUM CLN LB statements RB{
 subcase =(int) $2;
 //printf("inside int case %d",$2);
 int ddd = maincase-subcase;
 if(ddd==-$2)
 {
   printf("%d matched",$2);
 }
 
  
}
|CASE REAL_NUM CLN LB statements RB{
 dsubcase = $2;
 if(dmaincase==dsubcase)
 {
  printf("%lf matched",$2);
 }
  
}
|CASE STRING CLN LB statements RB{
 
  printf("string case from switch case");

}
;
def_stmt: DEFAULT CLN LB statements RB{
  printf("default case from switch case");
}
;

//if else if else and all--------------------------
cond_stmts: if_stmt
;

if_stmt: IF ALB expr ARB LB statements RB {
  
  if( (int)$3 ){
    printf("Inside If Block\n");
  }
 printf("whole string matched");
}
| if_stmt ELSE LB statements RB {
     printf("Inside if_else Block\n");
}
| if_stmt elif_stmts
| if_stmt elif_stmts ELSE LB statements RB

;
elif_stmts: elif_stmt
| elif_stmt elif_stmts

;
elif_stmt: ELIF ALB expr ARB LB statements RB {
  printf("Inside elseif Block\n"); 
}
//loops---------------------------------------
loop_stmts: for_loop
| while_loop
| dowhile_loop
;
for_loop: FROM ALB assignment DIVIDER expr DIVIDER expr ARB LB statements RB {
  printf("initializer value %d, condition value %lf, inc/dec/operation value %lf\n",$3, $5, $7);
  int count = 0;
  printf("inside for loop");
}
| FROM ALB RANGE INT_NUM DIVIDER INT_NUM ARB LB statements RB{
  printf("range for loop\n");
  int rngs=(int)$4;
  int rnge=(int)$6;
  int index,count=0;
  for(index=rngs;index<=rnge;index++)
  {
    count++;
  }
  printf("range for loop ran %d times \n",count);
}
;
while_loop: WHILE ALB expr ARB LB statements RB {
  if($3)
  {
    printf("while loop will be executed\n");
  }
  else {
    printf("while loop wont be executed\n");
  }

}
;
dowhile_loop: DO LB statements RB WHILE ALB expr ARB
{
  printf("do while loop iteration\n");
  if($7)
  {
    printf("dowhile loop will be executed again\n");
  }
  else {
    printf("dowhile loop wont be executed again\n");
  }
}
;
//special print,scan,conditions,switches and loops--------------------------------------------- 
special: cond_stmts
| switch_stmts
| loop_stmts
| PRINT LP all RP SM {
    //printf("variables or strings together\n");
}
| SCAN LP VAR RP SM {
    int idx = check_var($3);
    if(alredyDeclared[idx]==-1)
    {
        printf("variable not declared yet\n");
    }
    else if(alredyDeclared[idx]==1)
    {
        int value;
        scanf("%d", &value);
        record_int[idx]=value;
         printf("Integer Variable, %s = %d\n", $3, record_int[idx]);
    }
    else if(alredyDeclared[idx] == 2)  { 
         double value;
        scanf("%lf", &value);
        record_double[idx]=value;
         printf("Integer Variable, %s = %lf\n", $3, record_double[idx]);

}
    else if(alredyDeclared[idx] == 3)  { 
      char str[100];
      scanf("%c",str);
      int length = strlen(str);
      char* strr = malloc( length + 1 );
    strcpy(record_text[idx],strr);

    printf("Text Variable, %s = %s\n", $3,str);
    
}

}
;
all: printtype
| all DIVIDER printtype
;
printtype:
expr {
    printf("%lf",$1);
}  
| STRING {
    int length = strlen($1);
    char* str = malloc(length+1);
    strcpy(str,$1);
    printf("%s \n",str);
    free(str);
}
| VAR 
{
    int idx = check_var($1);
    if(alredyDeclared[idx]==-1)
    {
        printf("variable not declared yet");
    }
    else if(alredyDeclared[idx]==1)
    {
        int value = record_int[idx];
        int valll = (int)value;
         printf("Integer Variable, %s = %d", $1, valll);
    }
    else if(alredyDeclared[idx] == 2)  { 

    printf("Real Variable, %s = %lf",$1, record_double[idx]);
}
    else if(alredyDeclared[idx] == 3)  { 

    int length = strlen(record_text[idx]);
    char* str = malloc( length + 1 );
    strcpy(str, record_text[idx]);

    printf("Text Variable, %s = %s\n", $1,str);
    free(str);
}

}

;

//expressions--------------------------------------------------------------------------------------------------------------------------------
expr: INT_NUM             { $$ = (int)$1; }
| REAL_NUM                 { $$ = $1*1.0; }
| VAR                     { 

  int idx = check_var($1);
  
  if(alredyDeclared[idx] == 0) {printf("\nVaribale not Declared Before.\n");
  }

  else if(alredyDeclared[idx] == 1)  { $$ = record_int[idx]*1.00; }
  else if(alredyDeclared[idx] == 2)  { $$ = record_double[idx]*1.00 ; }

  /*printf("%s = %lf\n",$1, $$);*/

 }
| VAR ALB INT_NUM ARB   {

  int idx = check_var($1);
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , $1);
  }
  else{
  if(alredyDeclared[idx]==99){
      int x = record_int[idx];
      x+=$3;
      $$ = arr_int[x]*1.0 ;

      /*printf("%s[%d] = %lf\n",$1, $3, $$);*/
    }
  else if(alredyDeclared[idx]==100){
      int x = record_int[idx];
      x+=$3;
      $$ = arr_real[x];

      /*printf("%s[%d] = %lf\n",$1, $3, $$);*/
    }
  else {
      printf("Not Array\n");
    }
  }
}
| VAR ALB VAR ARB   {

  int idx = check_var($1);
  
  if(idx==-1)
  {
   printf("%s is not declared yet!\n" , $1);
  }
  else{
  if(alredyDeclared[idx]==99){
      int x = record_int[idx];
      int idx1 = check_var($3);
      if(idx1==-1)
      {
        printf("%s is not declared yet!\n" , $3);
      }
      else {
        if(alredyDeclared[idx1]==1){
          x+=record_int[idx1];
        }
      }
      $$ = arr_int[x]*1.0 ;

      //printf("%s[%s] = %lf\n",$1, $3, $$);
    }
  else if(alredyDeclared[idx]==100){
      int x = record_int[idx];
      int idx1 = check_var($3);
      if(idx1==-1)
      {
        printf("%s is not declared yet!\n" , $3);
      }
      else {
        if(alredyDeclared[idx1]==1){
          x+=record_int[idx1];
        }
      }
      $$ = arr_real[x]*1.0 ;
      /*printf("%s[%s] = %lf\n",$1, $3, $$);*/
    }
  else {
      printf("Not Array\n");
    }
  }
}

| ABS expr            { $$ = fabs($2)*1.0 ; }
| FACT expr           {
  
  int x = (int)$2 ;

  if(!x){ $$ = 1.0 ; }
  else if(x<0){ printf("Factrorial of Negative is not Defined.\t"); $$ = 0.0 ; }
  else if(x>20){ printf("Factrorial is too Large for Data Type.\t"); $$ = 0.0 ; }
  else{
  long long int factor = 1;
  for(i=2; i<=x; i++)
  {
    factor*=i;
  }
  $$ = factor;
  printf("factorial is %d",$$);
  $$ = factor*1.0;
  }
 }
| expr ADD expr         { $$ = $1 + $3; }
| expr SUB expr         { $$ = $1 - $3; }
| expr MUL expr         { $$ = $1 * $3; }
| expr DIV expr         {
  if($3)
    {
     $$ = ($1 / $3)*1.0 ;
    }
  else
    {
     $$ = 0;
     printf("\n Division by 0 is not Allowed.\n");
    }
 }
| expr MOD expr         { $$ = ((int)$1 % (int)$3)*1.0 ; }
| expr POWER expr         { $$ = pow( (int)$1 , (int)$3 )*1.0 ; }

//prefix
| INC VAR             {
  
  int idx = check_var($2);
  
  if(alredyDeclared[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(alredyDeclared[idx] == 1) {

    record_int[idx] = record_int[idx] + 1 ;
    $$ = record_int[idx]*1.0;
     }
  else if(alredyDeclared[idx] == 2) { 

    record_double[idx] = record_double[idx] + 1 ;
    $$ = record_double[idx];
   }
  else if(alredyDeclared[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
| DEC VAR             {

  int idx = check_var($2);
  
  if(alredyDeclared[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(alredyDeclared[idx] == 1) {

    record_int[idx] = record_int[idx] - 1 ;
    $$ = record_int[idx]*1.0;
     }
  else if(alredyDeclared[idx] == 2) { 

    record_double[idx] = record_double[idx] - 1 ;
    $$ = record_double[idx];
   }
  else if(alredyDeclared[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}

//postfix

| VAR INC             {

  int idx = check_var($1);
  
  if(alredyDeclared[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(alredyDeclared[idx] == 1) {

    $$ = record_int[idx]*1.0;
    record_int[idx] = record_int[idx] + 1 ;
     }
  else if(alredyDeclared[idx] == 2) { 

    $$ = record_double[idx];
    record_double[idx] = record_double[idx] + 1 ;
   }
  else if(alredyDeclared[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
| VAR DEC             {

  int idx = check_var($1);
  
  if(alredyDeclared[idx] == 0) {printf("\nVaribale not Declared Before.\n");}
  else if(alredyDeclared[idx] == 1) {

    $$ = record_int[idx]*1.0;
    record_int[idx] = record_int[idx] - 1 ;
     }
  else if(alredyDeclared[idx] == 2) { 

    $$ = record_double[idx];
    record_double[idx] = record_double[idx] - 1 ;
   }
  else if(alredyDeclared[idx] == 3) { 
    printf("Incorrect Data Type for Opretation.\n");
   }
}
| NOT expr               {
  $$ = (!($2))*1.0 ;
  //printf("%d not",$$);
}
| expr LES expr         { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x < y)*1.0 ; 
}
| expr GRT expr         { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x > y)*1.0 ; 
}
| expr LES_EQU expr       { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x <= y)*1.0 ; 
}
| expr GRT_EQU expr       { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x >= y)*1.0 ; 
}
| expr EQU expr         { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x == y)*1.0 ; 
}
| expr NOT_EQU expr       { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x != y)*1.0 ; 
}
| expr OR expr          { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x || y)*1.0 ; 
}
| expr AND expr         { 
    
    int x = (int)$1 ;
    int y = (int)$3 ;

    $$ = (x && y)*1.0 ; 
}
| LP expr RP             { $$ = $2; }
;

%%

int yywrap()
{
	return 1;
}
void yyerror(char *s)
{
	fprintf(stderr," jndjnd %s\n",s);
}
int main()
{
	freopen("zinput.txt","r",stdin);
  freopen("zoutput.txt","w",stdout);


	yyparse();
    
	return 0;
}
