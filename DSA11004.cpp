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

void makenode(node *root,int data,char x){
	if(x=='L') root->l=new node(data);
	if(x=='R') root->r=new node(data);
}

void insert(node *root,int x,int y,char z){
	if(root==NULL) return;
	if(root->data==x) makenode(root,y,z);
	else{
		insert(root->l,x,y,z);
		insert(root->r,x,y,z);
	}
}

void duyet(node *root){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node *n=q.front();
		q.pop();
		cout<<n->data<<" ";
		if(n->l!=NULL) q.push(n->l);
		if(n->r!=NULL) q.push(n->r);
	}
}

main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		node *root=NULL;
		while(n--){
			int x,y; char c;
			cin>>x>>y>>c;
			if(root==NULL){
				root=new node(x);
			}
			insert(root,x,y,c);
		}
		duyet(root);
		cout<<endl;
	} 
}

