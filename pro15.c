#include<stdio.h>
#include<math.h>

   int main(){


    float a,b,c,D;
    printf("enter first co-effecient : ");
    scanf("%f",&a);

    printf("\nenter 2nd co-effecient : ");
    scanf("%f",&b);

    printf("\nenter 3rd co-effecient : ");
    scanf("%f",&a); 

     D = (b*b)-(4*a*c);
     if(D>=0){

        float r1= (-b + sqrt(D))/2*a;
        float r2= (-b - sqrt(D))/2*a;

        printf("the root of the eq are :  r1=%f \t r2=%f ",r1,r2);


     }
     else{
        printf("no real root exist");
     }
    



return 0;
      }
