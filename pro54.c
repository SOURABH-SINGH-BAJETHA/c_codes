#include<stdio.h>
#include<string.h>

typedef struct{

    char name[20];

}employ;

   int main(){

    employ e[10];
    char str[10];

    int n,i;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++){
        fflush(stdin);
       gets(e[i].name);
    }

    printf("Enter name : ");
    gets(str);



    for(i=0;i<=n-1;i++){
       if(strcmp(str,e[i].name)==0){
        printf("Element found !");
        break;
       }
    }

    if(strcmp(str,e[i].name)!=0){
        printf("Element not found :");
    }

    






return 0;
      }