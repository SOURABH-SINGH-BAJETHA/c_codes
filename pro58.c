#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;

}node;



void print(node* root){
    if(root == NULL){
        
        return;
    }
   
    print(root->left);
    printf("-> %d",root->data);
    print(root->right);
}

node* insert(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// int count(node* root){
//     if(root ==  NULL){
//         return 0;
//     }
    
//     int left = count(root->left);
//     int right = count(root->right);
    
    
//     if(root->left != NULL && root->right != NULL){
//         return left + right +1;
        
//     }
//     else if((root->left != NULL && root->right == NULL)||(root->left == NULL && root->right != NULL)){
        
//       return  left + right +1;
//     }

    

//     return left + right;

    


    
// }

int c = 0;

void inorder(node* root){
    if(root == NULL){
        return ;
    }

    inorder(root->left);
    if((root->left != NULL && root->right != NULL)||(root->left != NULL && root->right == NULL)||(root->left == NULL && root->right != NULL)){
        c++;
        
        
    }
    inorder(root->right);
    
}



int main(){

    node* root = insert(5);
    root->left = insert(3);
    root->left->left = insert(2);
    root->right = insert(7);
    root->right->left = insert(6);
   
  
    
   // int c = 0;
    print(root);
    inorder(root);
    printf("\ncount : %d",c);

return 0;
}