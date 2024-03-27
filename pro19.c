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
    if(coloum==1){
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
        if(coloum==2){
        max=arr[0][1];
        min=arr[0][1];
        for(i=1;i<=2;i++){
            if(arr[0][1]>max){

                max=arr[i][1];

            }
               if(arr[i][1]<min){

                min=arr[i][1];

            }
        }
        printf("max : %d , min : %d ",max,min);


    }
        if(coloum==3){
        max=arr[0][2];
        min=arr[0][2];
        for(i=1;i<=2;i++){
            if(arr[i][2]>max){

                max=arr[i][2];

            }
               if(arr[i][2]<min){

                min=arr[i][2];

            }
        }
        printf("max : %d , min : %d ",max,min);


    }



return 0;
      }