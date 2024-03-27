#include<stdio.h>

void summ(int *p,int *q,int n){
    int i;
    *q=0;

    for(i=0;i<=n-1;i++){
        *q=*q+*(p+i);
    }

}

   int main(){

    int i,arr[50],n,sum;
    float avg;

    printf("enter array size : ");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);

    }

    summ(arr,&sum,n);

    avg=(float)(sum)/n;

    printf("sum of 1D array : %d",sum);
    printf("\naverage is : %.2f",avg);



return 0;
      }