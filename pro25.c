#include<stdio.h>
int prime(int n);

   int main(){
    int n,p;
    printf("enter number : ");
    scanf("%d",&n);
    p=prime(n);
    if(p==1){
        printf("number is prime");
    }
    else{
        printf("number is not prime ");
    }



return 0;
      }
      int prime(int n){
        int i;
        if(n==1){
            return 0;
        }
        else{
            for(i=2;i<=n-1;i++){
                if(n%i==0){
                    return 0;
                }
                
            }
        }
        return 1;
      }