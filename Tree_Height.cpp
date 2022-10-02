#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int Data;
    node* left;
    node* right;
//this is a pointer to active class object
    node(int d){
        this->Data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
//Creation
node* createTree(node* root){
    cout<<"\n DATA: ";
    int data;
    cin>>data;
    if(data==-1){
        return root;
    }
    root= new node(data);
    cout<<"Left of "<<data;
    root->left=createTree(root->left);
    cout<<"Right of "<<data;
    root->right=createTree(root->right);
}

//Algorith: Tree HEIGHT and WIDTH
int height(struct node* root){
    if(root==NULL)
    return 0;
    int Hl=height(root->left),Hr=height(root->right);
    if(Hl>=Hr)
    return Hl+1;
    else return Hr+1;
}
// Function to return the diameter of a Binary Tree.
int diameter(struct node* root) {
    if(root==NULL)
    return 0;
    
   int dia=height(root->left)+height(root->right)+1;
    int diaL=diameter(root->left),diaR=diameter(root->right);
    if(dia>=max(diaL,diaR))
    return dia;
    else return max(diaL,diaR); 
}
int main(){
    node* root=createTree(root);
    cout<<diameter(root);
}