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

void insert(node *root,int x){
	if(root==NULL) return;
	else if(root->data>x) insert(root->l,x);
	else insert(root->r,x);
}

void post(node *root){
	if(root==NULL) return;
	post(root->l);
	post(root->r);
	cout<<root->data<<" ";
}

main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int in[n],lv[n];
		node *root=NULL;
		for(int i=0;i<n;i++) cin>>in[i];
		for(int i=0;i<n;i++){
			cin>>lv[i];
			if(root==NULL) root=new node(lv[i]);
			else insert(root,lv[i]);
		}
		post(root);
	}
}
