#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
int a , b , c;
int tot;
double sr;
printf("enter first numbers :");

scanf("%d" , &a);

printf("enter seconde numbers :");

scanf("%d" , &b);

printf("enter last numbers :");

scanf("%d" , &c);

tot = a * b * c;

sr = cbrt(tot);

printf("%lf" , sr);


}
