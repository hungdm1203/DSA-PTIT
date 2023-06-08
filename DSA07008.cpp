#include<bits/stdc++.h>
using namespace std;
int stt(char x){
	if(x=='^') return 4;
	if(x=='*'||x=='/') return 3;
	if(x=='+'||x=='-') return 2;
	return 1;
}
void test(){
	string s;cin>>s;
	stack<char> st;
	string ss="";
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			st.push(s[i]);
		} else if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
			ss=ss+s[i];
		} else if(s[i]==')'){
			while(!st.empty()&&st.top()!='('){
				ss=ss+st.top();
				st.pop();
			}
			st.pop();
		} else{
			while(!st.empty()&&stt(st.top())>=stt(s[i])){
				ss=ss+st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		if(st.top()!='(') ss=ss+st.top();
		st.pop();
	}
	cout<<ss;
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
