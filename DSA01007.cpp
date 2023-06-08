#include<bits/stdc++.h>
using namespace std;
char s[100000];
int ok,n;

void ktao(){
	for(int i=1;i<=n;i++) s[i]='A';
}

void sinh(){
	int i;
	for(i=n;i>=1;i--){
		if(s[i]!='B'){
			s[i]='B';
			break;
		} else s[i]='A';
	}
	if(i<1) ok=0;
}

void in(){
	for(int i=1;i<=n;i++) cout<<s[i];
	cout<<" ";
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		ktao();
		while(ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}
