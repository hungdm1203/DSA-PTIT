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

void insert(node *&root,int x,int y,char c){
	if(root==NULL) return;
	if(root->data==x&&c=='L') root->l=new node(y);
	else if(root->data==x&&c=='R') root->r=new node(y);
	else{
		insert(root->l,x,y,c);
		insert(root->r,x,y,c);
	}
}
 
int check(node *root){
	if(root==NULL) return 0;
	if(root->l==NULL&&root->r==NULL) return 1;
	return check(root->l)+check(root->r);
}

main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		node *root=NULL;
		while(n--){
			int x,y;char c;
			cin>>x>>y>>c;
			if(root==NULL) root=new node(x);
			insert(root,x,y,c);
		}
		cout<<(check(root->l)==check(root->r));
		cout<<endl;
	}
}
