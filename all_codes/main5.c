#include <stdio.h>
#include <stdlib.h>
int main(){
   int tem;
   printf("enter tempeture:");
   scanf("%d" , &tem);
   if(tem<0){
        printf("glace");
     }
   else if(tem>100){
    printf("vapor");
   }
   else{
    printf("eau");
   }
}
