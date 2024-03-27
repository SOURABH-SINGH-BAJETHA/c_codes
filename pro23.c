#include<stdio.h>
void arm(int x);

   int main(){
    int a,b,s;

printf("enter number : ");
scanf("%d",&a);
arm(a);
//printf("%d",s);


return 0;
      }

      void arm(int x){
        int temp=x,rem;
    int  sum=0;
    while(x!=0){
        rem=x%10;
        sum=sum+(rem*rem*rem);
        x=x/10;
    }
    if(sum==temp){
        printf("armstrong");

    }
    else{
        printf("not an armstrong");
    }
        
      }