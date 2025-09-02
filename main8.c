#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int a , b , c ;
int re ;
double sq;
printf("enter number :");
scanf("%d" , &a);
printf("enter number :");
scanf("%d" , &b);
printf("enter number :");
scanf("%d" , &c);

re = a * b * c;


sq = cbrt(re);

printf("%f" , sq);

}
