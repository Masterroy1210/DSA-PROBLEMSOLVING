#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *right;
	struct node *left;
};
struct node* createnode(int data){
	struct node * temp=NULL;
	temp =(struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	cout<<"node create with value "<<data<<endl;
	return temp; 
}
int sizeoftree(struct node *root){
	if(root==NULL)return 0;
	else{
		return 1+sizeoftree(root->left)+sizeoftree(root->right);
	}
}
void levelorder(struct node *root){
	queue<struct node *>q;
	q.push(root);
	while(!q.empty()){
		auto it = q.front();
		if(it->left!=NULL)
		q.push(it->left);
		if(it->right!=NULL)
		q.push(it->right);
		cout<<it->data<<" ";
		q.pop();
	}

}

int main(){
	struct node *root=NULL;
	root = createnode(10);
	root->left =createnode(12);
	root->right=createnode(13);
	root->right->right=createnode(17);
	cout<<sizeoftree(root)<<endl;
	levelorder(root);
	return 0;


}