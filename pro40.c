/*Write a C program to accept records of employees.  The structure is:
Struct emp
{ char name[20];
int age;
int basic;
}
 calculate total salary as-total salary=basic+hra+da da=10% of basic hra=5% of basic salary Display age, total salary of employee in
 ascending order on the basis of total salary. Create separate function for input & 
 display.*/
#include<stdio.h>

struct emp
{ char name[20];
int age;
float basic;
};

void input(struct emp E[50],int n){
    int i,j;
    struct emp temp;
    
    for(i=0;i<=n-1;i++){
    printf("\nEnter the name of the employee %d : ",i+1);
    getc(stdin);
    gets(E[i].name);

    printf("\nEnter the age :  ");
    scanf("%d",&E[i].age);

    printf("\nEnter the basic salary : ");
    scanf("%f",&E[i].basic);

    }

    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-2-1;j++){
            if(E[j].basic>E[j+1].basic){
                temp=E[j];
                E[j]=E[j+1];
                E[j+1]=temp;

            }
        }
    }



}

void display(struct emp E[50],int n){
    int i;
   
    for(i=0;i<=n-1;i++){
        printf("\n\nemployee %d name    : %s ",i+1,E[i].name);
        printf("\nemployee age          : %d ",E[i].age);
        printf("\nemployee total salary : %f",(E[i].basic)+(E[i].basic*0.05)+(E[i].basic*0.1));
    }

}



int main(){
   int n;
   struct emp E[50];

   printf("enter the number of employees : ");
   scanf("%d",&n);

   input(E,n);
   display(E,n);
  


 return 0;
      }