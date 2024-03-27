#include<stdio.h>
#include<math.h>

   int main(){
    int a,b,c,d;
    float r1,r2;
    printf("enter the value of a,b,c resp : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("\nthe value of a : %d ",a);
    printf("\nthe value of b : %d ",b);
    printf("\nthe value of c : %d ",c);

    d=(b*b)-(4*a*c);
    if(d>=0){
        r1=(float)(-b+sqrt(d))/2*a;
        r2=(float)(-b-sqrt(d))/2*a;
        printf("value of first root : %f",r1);
        printf("value of second root : %f",r2);

        
    }
    else{
        printf("no real root exist ");
    }







return 0;
      }