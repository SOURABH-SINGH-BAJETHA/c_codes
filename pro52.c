#include<stdio.h>
int main()
{
 char str[30];
 FILE *fp1;
 fp1=fopen("test2.txt","w");
 if(fp1==NULL)
 {
printf("file creation error\n");
return 0;
 }
 else
 {
printf("enter the text\n");
while(gets(str)!=NULL)
{
 fputs(str,fp1);
 fputs("\n",fp1);
}
 }
 fclose(fp1);
 fp1=fopen("test2.txt","r");
 if(fp1==NULL)
 {
printf("file does not exist\n");
return 0;
 }
 else
 {
while(fgets(str,30,fp1)!=NULL)
{
 puts(str);
}
 }
 fclose(fp1);
return 0;
}
