#include <stdio.h>
#include <stdlib.h>
int main(){
int a;
int b;
int c;
int moy;
float mmm;
printf("enter number :");
scanf("%d" , &a);
printf("enter number :");
scanf("%d" , &b);
printf("enter number :");
scanf("%d" , &c);
moy = a * 2 + b * 3 + c * 5;
mmm = moy / 10 ;
printf("%.2f" , mmm);

}
