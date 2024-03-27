/*Q.1 WRITE A PROGRAM TO CONVERT THE TEMPERATURE FROM FARENHEIT TO CELSIUS.
c=5/9*(f-32)*/

#include<stdio.h>

   int main(){
    
    float c,f;
    printf("enter temperature(in Farenheit):");
    scanf("%f",&f);
    c=(5 *(f-32))/9;
    printf("\nthe temperature in celsius :%f",c);



return 0;
      }