#include<bits/stdc++.h>
using namespace std;

int check(string s,int n){
	long long x=0;
	for(int i=0;i<s.size();i++){
		x=x*10+s[i]-'0';
	}
	if(x%n==0) return 1; else return 0;
}

void test(){
	int n;cin>>n;
	queue<string> q;
	q.push("1");
	while(1){
		string s=q.front();
		q.pop();
		if(check(s,n)){
			cout<<s;
			return;
		} 
		q.push(s+'0');
		q.push(s+'1');
	}
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
