#include<stdio.h>

   int main(){

    FILE *fp;
    char ch;

    fp= fopen("pro45.txt","w");

    if(fp==NULL){
        printf("File not found");
    } 

    printf("Enter string : ");

    while((ch=getchar())!=EOF){
        fputc(ch,fp);
    }

    fclose(fp);

    fp=fopen("pro45.txt","r");

    if(fp==NULL){
        printf("file not found \n");

    }

    printf("\nstring in file : ");

    while((ch=fgetc(fp))!=EOF){
        putchar(ch);
    }

    fclose(fp);


return 0;
      }