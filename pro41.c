#include<stdio.h>
int display(char str[50]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            return i+1;
        }
        else{
            i++;
        }
    } 
}
   int main(){
    char str[50],str1[50];
    int l,i=0;
    
    printf("enter sentence : ");
    gets(str);

    l= display(str);

    while(str[i]!='\0'){
        str1[i]=str[l+i];

        i++;
    }
    puts(str1);
return 0;
      }
