#include<bits/stdc++.h>
using namespace std;
void test(){
	string s;cin>>s;
	stack<int> st;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]>='0'&&s[i]<='9') st.push(s[i]-'0');
		else{
			int x=0,y=0;
			if(!st.empty()){
				x=st.top();st.pop();
				if(!st.empty()){
					y=st.top();st.pop();
				}
			}
			if(s[i]=='+') st.push(x+y);
			if(s[i]=='-') st.push(x-y);
			if(s[i]=='*') st.push(x*y);
			if(s[i]=='/') st.push(x/y);
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
