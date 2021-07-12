	#include<bits/stdc++.h>
	using namespace std;


	struct node {
		int data;
		struct node * left;
		struct node *right;
	};


	struct node *createnode(int data){
		struct node *temp =NULL;
		temp = (struct node *)malloc(sizeof(struct node));
		temp->data = data;
		temp->left =NULL;
		temp->right =NULL;
		return temp;
	}

	void spiralorder(struct node *root){
		stack<struct node*>s1;
		stack<struct node*>s2;
		s1.push(root);
		while(!s1.empty()||!s2.empty()){

			while(!s1.empty()){
				auto it =s1.top();
				cout<<it->data<<" ";
				s1.pop();
				if(it->right!=NULL)
					s2.push(it->right);
				if(it->left!=NULL)
					s2.push(it->left);
			}

			while(!s2.empty()){
				auto it =s2.top();
				s2.pop();
				cout<<it->data<<" ";
				if(it->left!=NULL)
					s1.push(it->left);
				if(it->right!=NULL)
					s1.push(it->right);
			}

		}
	}
	void mirror(struct node *root){
		queue<struct node*>q;
	q.push(root);
	while(!q.empty()){
		auto it =q.front();
		q.pop();
		struct node *temp=NULL;
		if(it->left!=NULL && it->right!=NULL){
			temp = it->right;
			it->right = it->left;
			it->left =temp;
			q.push(it->left);
			q.push(it->right);
		}else if(it->left!=NULL){
			q.push(it->left);
		}else if(it->right!=NULL){
			q.push(it->right);
		}

	}
	cout<<" Binary tree mirrored"<<endl;
	}
	void recursivemirro(struct node *root){
		if(root==NULL){
				return ;
		}else{
			recursivemirro(root->left);
			recursivemirro(root->right);
			swap(root->left,root->right);
		}
		
	}

	int main(){
	struct node *root=NULL;
	root = createnode(10);
	root->left =createnode(20);
	root->right = createnode(30);
	root->left->left=createnode(40);
	root->left->right=createnode(50);
	root->right->left=createnode(60);
	root->right->right=createnode(70);
	root->left->left->left =createnode(80);
	root->left->left->right =createnode(90);
	root->left->right->left=createnode(100);
	root->left->right->right=createnode(110);


	spiralorder(root);
	cout<<endl;
	mirror(root);
	cout<<endl;
	spiralorder(root);
	cout<<endl;
	recursivemirro(root);
	cout<<" Binarry tree mirrord using recursion ";
	cout<<endl;
	spiralorder(root);

	return 0;


	}