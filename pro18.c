#include<stdio.h>

   int main(){
    char a;
    printf("enter alphatbet : ");
    scanf("%c",&a);

    if(a>='a'&&a<='z'||a>='A'&&a<='Z'){
        if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            printf("it is vowel");

        }
        else if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("it is a vowel");
        }
        else{
            printf("it is a consonent ");
        }

    }
    else{
        printf("not an alphabet");
    }


return 0;
      }