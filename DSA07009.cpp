#include<bits/stdc++.h>
using namespace std;
void test(){
	string s;cin>>s;
	stack<string> st;
	for(int i=s.size();i>=0;i--){
		if(s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/'){
			st.push(string(1,s[i]));
		} else{
			if(!st.empty()){
				string x=st.top();
				st.pop();
				string y=st.top();
				st.pop();
				string ss='('+x+s[i]+y+')';
				st.push(ss);
			}
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
