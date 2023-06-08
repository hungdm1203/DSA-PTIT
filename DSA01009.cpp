#include<bits/stdc++.h>
using namespace std;
int n,k,ok,dem=0;
vector<string> v;
vector<char> a;

void sinh(){
	int i;
	for(i=n-1;i>=0;i--){
		if(a[i]=='A'){
			a[i]='B';
			break;
		} else a[i]='A';
	}
	if(i<0) ok=0;
}

void check(){
	string s="";
	for(int i=0;i<n;i++) s+=a[i];
	string tmp(k,'A');
	int x=s.find(tmp,0);
	if(x!=-1){
		string res=s.substr(x+1);
		x=res.find(tmp,0);
		if(x==-1) v.push_back(s);
	}
}

main(){
	cin>>n>>k;
	ok=1;
	for(int i=0;i<n;i++) a.push_back('A');
	while(ok){
		check();
		sinh();
	}	
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
}
