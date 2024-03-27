#include<stdio.h>

   int main(){

    char str[50],str1[50],str2[50];

    printf("enter string : ");
    gets(str);
    int i=0,j=0,k=0;
    while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
                str1[j]=str[i];

                i++;
                j++;

            }
            else{
                str2[k]=str[i];
                k++;i++;
            }
        }
          else{
        i++;
    }
    }
  
    str1[j+1]='\0';
    str2[k+1]='\0';


    
    printf("consonent : ");
    puts(str2);
    printf("\nvowel : ");
    puts(str1);



   return 0;
      }