#include<stdio.h>

   int main(){
      int n,a=0,i;
    printf("enter number : ");
    scanf("%d",&n);

    if(n==1){
      printf("not a prime number ");

    }
    else{
      for(i=2;i<=n-1;i++){
         if(n%i==0){
            a=1;
         }
      }
      if(a==1){
         printf("not a prime number ");
      }
      else{
         printf("prime number ");
      }
    }


return 0;
      }