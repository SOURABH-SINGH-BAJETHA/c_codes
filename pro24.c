#include<stdio.h>
void pel(int n);

   int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    pel(n);



return 0;
      }
      void pel(int n){

        int
        temp=n;
        int sum=0,rem;
        while(n!=0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
        }
        if(sum==temp){
            printf("pelindrom");

        }
        else{
            printf("not a pelindrom");
        }



      }