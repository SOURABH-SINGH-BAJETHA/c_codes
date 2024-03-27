#include<iostream>
using namespace std;

int main(){
    int arr[50],i,j,temp,n;

    cout<<"enter number : ";
    cin>>n;
    cout<<"input array "<<endl;
    for( i=0;i<=n-1;i++){
        cin>>arr[i];

    }
    for( i=0, j=n-1;i<j;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
       for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";

    }


return 0;
}