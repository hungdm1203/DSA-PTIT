#include<bits/stdc++.h>
using namespace std;
long long so(string s){
	long long x=0;
	for(int i=0;i<s.size();i++){
		x=x*10+s[i]-'0';
	}
	return x;
}
void test(){
	string s[1001];
	int n;cin>>n;
	queue<string> qc;
	queue<long long> q;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=n-1;i>=0;i--){
		if(s[i]=="+"||s[i]=="-"||s[i]=="*"||s[i]=="/") qc.push(s[i]);
		else q.push(so(s[i]));
	}
	while(!qc.empty()){
		long long x=q.front();
		q.pop();
		long long y=q.front();
		q.pop();
		string z=qc.front();
		if(z=="+") q.push(y+x);
		else if(z=="-") q.push(y-x);
		else if(z=="*") q.push(y*x);
		else q.push(y/x);
		qc.pop();
	}
	cout<<q.front();
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
