#include<stdio.h>

   int main(){
    int n,key,i,arr[50],index,flag=0;
    printf("enter number if n = ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter key : ");
    scanf("%d",&key);

    for(i=0;i<=n-1;i++){
        if(arr[i]==key){
            index=i;
            flag=1;
        }
    }
    if(flag==1){
        printf("element found : %d ",index );

    }
    else{
        printf("element not found ");
    }


return 0;
      }