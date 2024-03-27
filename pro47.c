#include<stdio.h>

   int main(){

    FILE *fp1,*fp2;
    char ch,ch1;

    fp1=fopen("pro47a.txt","w");

    if(fp1==NULL){
        printf("File not found ");
    }
    
    printf("Enter string : ");
    while((ch=getchar())!=EOF){
        fputc(ch,fp1);
    }

    fclose(fp1);

    fp1=fopen("pro47a.txt","r");
    fp2=fopen("pro47b.txt","w");

    if(fp1==NULL||fp2==NULL){
        printf("file not be used ");
    }
    
    while((ch=fgetc(fp1))!=EOF){
        if(ch>='a' && ch<='z'){
            ch=ch-32;
        }
        fputc(ch,fp2);
    }

    fclose(fp1);
    fclose(fp2);



return 0;
      }