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
void  insert(node *&root,int x){
	if(root==NULL) root=new node(x);
	else if(root->data>x) insert(root->l,x);
	else insert(root->r,x);
}
void la(node *root){
	if(root==NULL) return;
	if(root->l==NULL&&root->r==NULL) cout<<root->data<<" ";
	else {
		la(root->l);
		la(root->r);
	}
}

main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		node *root=NULL;
		while(n--){
			int x;cin>>x;
			insert(root,x);
		}
		la(root);
		cout<<endl;
	}
}
