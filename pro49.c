#include<stdio.h>
#include<string.h>

void reverse(char *str){
    
    int l = 0;
    int i,j;
    char temp; 
    while(str[l]!='\0'){
        l++;
    }
    for(i=0,j=l-1; i<j; i++,j--){

        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

    }

}

int main(){

    char str[20],copy[20];

    printf("Enter string : ");
    gets(str);

    strcpy(copy,str);

    reverse(str);

    printf("after reverse : ");
    puts(str);

    if(strcmp(copy,str)==0){
        printf("palindrom");

    }
    else{
        printf("not a palindrom");
    }

    
    


    return 0;
}