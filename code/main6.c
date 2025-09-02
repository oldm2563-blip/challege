#include <stdio.h>
#include <stdlib.h>
int main(){
int a;
int b;
int c;
char op;
printf("enter the first number:");
scanf("%d" , &a );
printf("enter the second number:");
scanf("%d" , &b );
printf("pick an operator from the following + - * / :");
scanf(" %c" , &op);
switch(op){
case '+':
printf("%d" , c = a + b );
break;
case '-':
printf("%d" , c = a - b);
break;
case '*':
printf( "%d" , c = a * b);
break;
case '/':
    if(b == 0){
        printf("impossible");
    }
    else{
        printf("%d" , c = a / b );
    }
}
}
