#include<bits/stdc++.h>
using namespace std;

void test(){
	string s;cin>>s;
	stack<string>st;
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			st.push(string(1,s[i]));
		} else if(!st.empty()){
			string x=st.top();
			st.pop();
			string y=st.top();
			st.pop();
			string ss='('+y+s[i]+x+')';
			st.push(ss);
		}
	}
	cout<<st.top();
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
