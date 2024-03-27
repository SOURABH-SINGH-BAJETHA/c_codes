#include<stdio.h>

   int main(){

    FILE *fp1,*fp2;
    char ch;

    fp1= fopen("pro46a.txt","w");

    if(fp1==NULL){
        printf("file not found \n");
    }
    
    printf("Enter string : ");
    while((ch=getchar())!=EOF){
        fputc(ch,fp1);
    }

    fclose(fp1);


    fp1=fopen("pro46a.txt","r");
    fp2=fopen("pro46b.txt","w");

    if(fp1==NULL||fp2==NULL){
        printf("file not be executed ");
    }

    while((ch=fgetc(fp1))!=EOF){
        fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);



return 0;
      }