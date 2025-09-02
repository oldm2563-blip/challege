#include <stdio.h>
#include <stdlib.h>
int main()
{
float temp;
float K;
printf("enter the temperture :");
scanf("%d" , &temp);
K = temp + 273.15;

printf("%.2f kelvin" , K);
}
