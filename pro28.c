#include<stdio.h>

int sort(int arr[],int n,int key){
    int i,j,temp,ans=-1;
    for(i=0;i<=n-1;i++){

        if(key==arr[i]){
            ans=i;
            return ans;
        }
    
    }
    return ans;
}



   int main(){
    int i,n,arr[50],key,index;
    printf("enter size : ");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);

    }

    printf("enter number : ");
    scanf("%d",&key);
     index=sort(arr,n,key);

if(index!=-1){

    printf("element %d found at index : %d",arr[index],index);
}
else{
    printf("element not found ");}
    


return 0;
      }