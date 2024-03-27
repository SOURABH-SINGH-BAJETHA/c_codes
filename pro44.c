#include<stdio.h>
#include<string.h>

typedef struct {
    int dd;
    int mm;
    int yy;

}date;

typedef struct {
    char name[20];
    int id;
    date dob;
    float per10;
    float per12;
    char city[20];
    char fatname[20];
    int pin;


}detail;

detail pin1(detail s[100],int n){
    int i,key;

    printf("Enter the pin of student : ");
    scanf("%d",&key);

    for(i=0;i<=n-1;i++){

        if(key==s[i].pin){
            return s[i];
        }
        
    }
}
detail id1(detail s[100],int n){
     int i,key;

    printf("Enter the id of student : ");
    scanf("%d",&key);

    for(i=0;i<=n-1;i++){

        if(key==s[i].id){
            return s[i];
        }
        
    }

}

detail name1(detail s[100],int n)
{

    int i,j,ans;
    char key[50];

    printf("Enter the name of student : ");
    scanf("%s",key);

    for(i=0;i<=n-1;i++){
        for(j=0;key[j]!='\0';j++){
            if(key[j]==s[i].name[j]){
                ans=i;
                continue;
            }
            else{
                ans=-1;
                break;
            }
        }
        if(ans==i){
            return s[ans];
        }
       
        
    
    }
     
    
}


   int main(){

    int n,i,k;
    detail s[100],temp;

    printf("Enter number : ");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++){
        printf("Enter name : ");
        scanf("%s",s[i].name);

        printf("\nEnter id : ");
        scanf("%d",&s[i].id);

        printf("\nEnter date of birth : ");
        scanf("%d",&s[i].dob.dd);
        scanf("%d",&s[i].dob.mm);
        scanf("%d",&s[i].dob.yy);

        printf("\nEnter percent in 10th : ");
        scanf("%f",&s[i].per10);

        printf("\nEnter percent in 12th : ");
        scanf("%f",&s[i].per12);

        printf("\nEnter city : ");
        scanf("%s",s[i].city);

        printf("\nEnter father's name : ");
        scanf("%s",s[i].fatname);

        printf("\nEnter pin : ");
        scanf("%d",&s[i].pin);

        
    }

    printf("\nEnter the catagory to search  : ");
    printf("\n\n1 for pin : ");
    printf("\n2 for id :");
    printf("\n3 for name : ");

    scanf("%d",&k);

    switch(k){
        case 1 : temp= pin1(s,n);break;
        case 2 : temp=id1(s,n);break;
        case 3 : temp=name1(s,n);break;
    }
    
    puts(temp.name);
    printf("\n id : %d ",temp.id);
    printf("\ndob : %d /%d /%d",temp.dob.dd,temp.dob.mm,temp.dob.yy);
    printf("\npercent in 10th : %f",temp.per10);
    printf("\npercent in 12th : %f",temp.per12);
    puts(temp.city);
    printf("\nfather's name : ");
    puts(temp.fatname);
    printf("%d",temp.id);
 

return 0;
      }