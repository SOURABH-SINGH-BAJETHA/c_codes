#include<stdio.h>
#include<string.h>

   int main(){
    char name[50],copy[50];
    printf("enter name : ");
    gets(name);

    strcpy(copy,name);
   
    puts(name);

return 0;
  }