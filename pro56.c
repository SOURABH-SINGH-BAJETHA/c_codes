#include<stdio.h>
#include<string.h>

char stack[100];
int top = -1;
char ans[100];
void push(char data ){
    top++;
    stack[top]=data;

}

char pop(){
    

    int c = stack[top];
    top--;
    return c;
    
}

int precedence(char ch){
    if(ch=='*' || ch == '/'){
        return 3;
    }
    else if(ch=='+'|| ch == '-'){
        return 2;
    }
    else{
        return 0;
    }
}

int isoperator(char ch){
    if(ch == '+'||ch == '-' || ch=='*' || ch =='/'){
        return 1;
    }
    else{
        return 0;
    }
}

char * infixtopostfix(char* infix){

    int i = 0;
    int k = 0;

    while(infix[i]!='\0'){
        
        if(!isoperator(infix[i])){
            ans[k] = infix[i];
            k++;
            i++;
          
        }

        else{
            if(precedence(infix[i])>precedence(stack[top])){
                push(infix[i]);
                i++;
            }
            else{
                ans[k] = pop();
                k++;
            }
        }
    }

    while(top!=-1){
        ans[k] = pop();
        k++;
    }

   

    ans[k] = '\0';
    
}

int main(){


    char * inflix = "x-y/z-k*d";
    infixtopostfix(inflix);
    puts(inflix);
    puts(ans);





return 0;
}