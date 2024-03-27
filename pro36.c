#include<stdio.h>   //to print the element after first space 

int display(char *p){
    int i=0;

    while(*(p+i)!='\0'){

        if(*(p+i)==' '){
          return i++;
        }
        i++;

    }
    
}


int main(){

    char str[50],*p;
    int value;

    p=str;

    printf("Enter sentence : ");
    gets(str);

    value = display(str);

    p=p+value;

    puts(p);



    


return 0;
      }