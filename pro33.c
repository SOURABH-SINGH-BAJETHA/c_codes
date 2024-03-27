#include<stdio.h>

   int main(){

    FILE *fp;
    char ch;

    fp = fopen("pro45.txt","r");

    if(fp=NULL){
        printf("file not found ");
    }
    printf("h");
    while((ch=fgetc(fp))  EOF){
        
        putchar(ch);
        
    }

    printf("kira");

    fclose(fp);


return 0;
      }