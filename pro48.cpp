#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>set,vector<vector<int>>ans,int index,vector<int>output){
	
	if(index>=set.size()){
		printf("hello");
	}
	
	
}

int main(){

    vector<int>set;
    set.push_back(1);
    set.push_back(2);
    set.push_back(3);
    
    vector<vector<int>>ans; 
    vector<int>output;
    int index = 0 ;
    
    solve(set,ans,index,output);
    
    
    

return 0;
}