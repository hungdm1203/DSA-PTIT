#include<bits/stdc++.h>
using namespace std;

void test(){
	string n;cin>>n;
	long long dem=0;
	queue<string> q;
	q.push("1");
	while(!q.empty()){
		string s=q.front();
		q.pop();
		dem++;
		string x=s+'0';
		if(x.size()>n.size()||(x.size()==n.size()&&x>n)) break;
		q.push(x);
		string y=s+'1';
		if(y.size()>n.size()||(y.size()==n.size()&&y>n)) break;
		q.push(y);
	}
	cout<<dem+q.size();
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
