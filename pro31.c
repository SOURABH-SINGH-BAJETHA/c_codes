#include<stdio.h>
#include<string.h>//copy-->

   int main(){
    char name[50],copy[50];
     printf("enter words : ");
     gets(name);

     strcpy(copy,name);

     puts(copy);


return 0;
      }