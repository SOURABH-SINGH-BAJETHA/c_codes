/*write a c program to recieve the name,age,marks in four subject and print the name age and % of student scoring marks above then average*/

#include<stdio.h>

   int main(){

    int n,i,j,per=0;
    float marks,totalper=0,avgper;
   
    struct datatype{
      char name[50];
      int age;
      int marks[4];
      float per;
    }s[50];

   printf("Enter number of student : ");
   scanf("%d",&n);

   for(i=0;i<=n-1;i++){
     printf("\nEnter detail of no. %d student ",i+1);

     printf("\nEnter name : ");
     scanf("%s",&s[i].name);

     printf("Enter age : ");
     scanf("%d",&s[i].age);

     printf("Enter marks in four subject : ");
     for(j=0;j<=3;j++){
        scanf("%d",&s[i].marks[j]);
     }
     marks=0;
     for(j=0;j<=3;j++){
        marks=marks+s[i].marks[j];
     }
     
     s[i].per=(float)marks/4; 
     printf("total percent : %f ",s[i].per); 

     
     
   }
   printf("\naverage persent : ");
  for(i=0;i<=n-1;i++){
    
    totalper=totalper+s[i].per;

  }
  

  avgper=(float)totalper/n;
  printf("%f",avgper);

  printf("\nthe student got above average : \n");
  for(i=0;i<=3;i++){
    if(s[i].per>=avgper){
        printf("%s    ",s[i].name);
    }
    
  }


return 0;
}