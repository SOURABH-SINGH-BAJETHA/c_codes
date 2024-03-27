#include<stdio.h>

   int main(){
    int a,i,j,arr[10][10],coloum,max,min;
    printf("enter numbers : ");
    //scanf("%d",&);

    for(i=0;i<=2;i++){

        for(j=0;j<=2;j++){
            scanf("%d",&arr[i][j]);
        }
        

    }
      for(i=0;i<=2;i++){

        for(j=0;j<=2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        
    }
    printf("enter coloum : ");
    scanf("%d",&coloum);
    for(i=0;i<=2;i++){
        max=arr[0][0];
        min=arr[0][0];
        for(i=1;i<=2;i++){
            if(arr[i][0]>max){

                max=arr[i][0];

            }
               if(arr[i][0]<min){

                min=arr[i][0];

            }
        }
        printf("max : %d , min : %d ",max,min);

    }
       
    
        



return 0;
      }