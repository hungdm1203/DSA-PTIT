#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *l,*r;
	node(int x){
		data=x;
		l=r=NULL;
	}
};

void insert(node *&root,int x){
	if(root==NULL) root=new node(x);
	else if(root->data>x) insert(root->l,x);
	else insert(root->r,x);
}

void pre(node *root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	pre(root->l);
	pre(root->r);
}

main(){
	int t,n,x;cin>>t;
	while(t--){
		cin>>n;
		node *root=NULL;
		while(n--){
			cin>>x; 
			insert(root,x);
		}
		pre(root);
		cout<<endl;
	}
}
