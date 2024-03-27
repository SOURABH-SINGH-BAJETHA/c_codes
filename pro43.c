#include<stdio.h>

int pel(char str[50]){
    int l=0,i,j;
    while(str[l]!='\0'){
        l++;
    }
    for(i=0,j=l-1;i<j;j--,i++){
        if(str[i]==str[j]){
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}
int main(){
    char str[50];
    int ans;
    printf("enter string : ");
    gets(str);

    

    ans = pel(str);

    if(ans==1){
        printf("pelindrom");

    }
    else{
        printf("not a pellindrom");
    }
return 0;
      }