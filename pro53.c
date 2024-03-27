#include<stdio.h>

typedef struct{

    int hh;
    int mm;
    int ss;


}time;

time inputs(time t1){

    printf("enter hours : ");
    scanf("%d",&t1.hh);
    printf("enter minutes : ");
    scanf("%d",&t1.mm);
    printf("enter second : ");
    scanf("%d",&t1.ss);

    return t1;
}

void display(time t2){

    printf("time : %d:%d:%d",t2.hh,t2.mm,t2.ss);
}

int main(){

   time t1,t2;

   t2 = inputs(t1);

   display(t2);




return 0;
}