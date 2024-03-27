#include<stdio.h>
#include<string.h>

   int main(){
    char string[50],s2[50];

    printf("enter name : ");
    gets(string);

    printf("\nenter title : ");

    gets(s2);

    strcat(string,s2);

    printf("full : ");

    puts(string);

    printf("\n s2 : ");

    puts(s2);

    


return 0;
      }