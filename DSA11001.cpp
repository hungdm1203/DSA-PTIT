#include<bits/stdc++.h>
using namespace std;
void test(){
	string s;cin>>s;
	stack<string> st;
	for(int i=0;i<s.size();i++){
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
			string x=st.top();
			st.pop();
			string y=st.top();
			st.pop();
			st.push(y+s[i]+x);
		} else st.push(string(1,s[i]));
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
