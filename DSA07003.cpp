#include<bits/stdc++.h>
using namespace std;
void test(){
	string s;cin>>s;
	stack<char> st;
	for(auto i:s){
		if(i=='('||i=='+'||i=='-'||i=='*'||i=='/'){
			st.push(i);
		}else if(i==')'){
			int ok=0;
			while(!st.empty()){
				char x=st.top();
				st.pop();
				if(x=='+'||x=='*'||x=='-'||x=='/') ok=1;
				if(x=='(') break;
			}
			if(ok==0){
				cout<<"Yes";
				return;
			}
		}
	} cout<<"No";
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
} 
