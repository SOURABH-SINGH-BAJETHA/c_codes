#include<stdio.h>

   int main(){

    char a;

    printf("enter alphabet: ");
    scanf("%c",&a);

    if((a>='a'&& a<='z')||(a>='A'&& a<='Z')){
        if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("it is a vowel");


        }
        else{
            printf("not a vowel");}

    }
    else{
        printf("not an alphabet ");
    }


return 0;
      }