#include<bits/stdc++.h>
using namespace std;

struct node{
  int data;
  struct node *left;
  struct node *right;

};
bool checkequal(struct node *root1,struct node *root2){
  if(!root1 &&!root2) return true;
  if(root1 && root2 ){
    return (root1->data==root2->data)&&checkequal(root1->left,root2->left)&&checkequal(root1->right,root2->right); 
  }
  return false;
}
int sizeoftree(struct node *root){
  if(root==NULL){
    return 0;
  }else{
    return(1+sizeoftree(root->left)+sizeoftree(root->right)); 

  }
}
struct node* newnode(int data){
  struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp->data = data;
  temp->left =NULL;
  temp->right = NULL;
  

}

int main(){
  struct node *root1 = NULL;
  root1 = newnode(10);
  root1->left=newnode(12);
  root1->right = newnode(13);
  root1->left->right = newnode(14);
  root1->left->right->left=newnode(17);
  root1->right->left =newnode(15);
  struct node *root2=NULL;
  root2 = newnode(10);
  root2->left=newnode(12);
  root2->right = newnode(13);
  root2->left->right = newnode(14);
  root2->left->right->left=newnode(17);
  root2->right->left =newnode(15);

  cout<<" THe number of the nodes in the tree 1 is"<<sizeoftree(root1);
  cout<<"The number of the nodes int hte tree 2 is"<<sizeoftree(root2);
  bool res = checkequal(root1,root2);
  if(res==true){
    cout<<"\n both the tree are equal"<<endl;
  }else{
    cout<<"\n both the tree are not equal"<<endl;
  }
  return 0;

}