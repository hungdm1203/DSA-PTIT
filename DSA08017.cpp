#include<bits/stdc++.h>
using namespace std;

void test(){
	int n;cin>>n;
	queue<string> q;
	vector<string> v;
	q.push("6");
	q.push("8");
	while(!q.empty()){
		string s=q.front();
		q.pop();
		if(s.size()>n){
			break;
		} else v.push_back(s);
		q.push(s+'6');
		q.push(s+'8');
	}
	for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
