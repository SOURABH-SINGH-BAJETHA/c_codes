#include<stdio.h>    //array reverse using dynamic memory allocation -->
#include<stdlib.h>

void reverse(int *q,int n){
    int i,j,temp;
    for(i=0,j=n-1;i<j;j--,i++){
        temp=*(q+i);
        *(q+i)=*(q+j);
        *(q+j)=temp;

    }
    
   
}

   int main(){

    int n,*p,i;

    printf("enter number of array : ");
    scanf("%d",&n);

    p=(int *)malloc(n*sizeof(int ));
    
    printf("enter the element : \n");
    for(i=0;i<=n-1;i++){
        scanf("%d",p+i);
    }

    reverse(p,n);
    
    for(i=0;i<=n-1;i++){
        printf("%d  ",*(p+i));
    }   

    free(p);
    printf("\n%d",*p);
    
return 0;
      }