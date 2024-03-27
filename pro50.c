#include<stdio.h>
#include<string.h>

void replace(char *str){

    int l = 0 ;
    int i; 
    while(str[l]!='\0'){
        l++;
    }

    for(i = 0 ; i<=l-1 ; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i]='X';
        }

    }

}

int main(){

    char str[20];

    printf("Enter string : ");
    gets(str);

    replace(str);

    printf("Afetr replacing : ");
    puts(str);
    


return 0;
}