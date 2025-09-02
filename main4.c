#include <stdio.h>
#include <stdlib.h>
int main()
{
float temp;
float K;
printf("enter speed in m/s:");

scanf("%f" , &temp);

K = temp * 0.27778;

printf("%.2f k/h" , K);
}
