#include<stdio.h>
// swaping of two variable without using third variable.
   int main(){
    int a,b;

    printf("enter number A= ");
    scanf("%d",&a);
    
    printf("\nenter number B= ");
    scanf("%d",&b);


    a=a+b;
    b=a-b;
    a=a-b;


    

    printf("so the number after swaping : A=%d  \n B=%d" ,a,b);




return 0;
      }