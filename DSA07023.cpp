#include<bits/stdc++.h>
using namespace std;
void test(){
	string s,tmp;getline(cin,s);
	stringstream ss(s);
	stack<string> st;
	while(ss>>tmp){
		st.push(tmp);
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}
main(){
	int t;cin>>t;cin.ignore();
	while(t--){
		test();
		cout<<endl;
	}
}
