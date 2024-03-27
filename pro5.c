#include<stdio.h>

   int main(){
    int a,b,pro;

    printf("enter number A= ");
    scanf("%d",&a);
    
    printf("\nenter number B= ");
    scanf("%d",&b);

    pro=a;
    a=b;
    b=pro;

    printf("so the number after swaping : A=%d  \n B=%d" ,a,b);



return 0;
      }