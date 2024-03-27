#include<stdio.h>

int main(){

    FILE *fp1,*fp2;
    char ch;

    fopen("pro51a,txt","w");

    printf("Enter string : ");

    while((ch=getchar())!=EOF){
         
         fputc(ch,fp1);

    }

    fclose(fp1);

    fopen("pro51a.txt","r");
    fopen("pro51b.txt","w");

    while((ch=fgetc(fp1))!=EOF){
        fputc(ch,fp2);
    }

    

    
    fclose(fp1);
    fclose(fp2);

    fopen("pro51b.txt","r");

    while((ch=getchar())!=EOF){
        printf("%c",ch);
    }

    fclose(fp2);


return 0;
}