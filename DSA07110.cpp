#include<bits/stdc++.h>
using namespace std;
void test(){
	string s;cin>>s;
	stack<char> st;
	for(auto i:s){
		if(i=='('||i=='['||i=='{'){
			st.push(i);
		} else{
			int ok=0;
			while(!st.empty()){
				char x=st.top();
				st.pop();
				if((x=='('&&i==')')||(x=='['&&i==']')||(x=='{'&&i=='}')){
					ok=1;break;
				}
			}
			if(ok==0){
				cout<<"NO";
				return;
			}
		}
	}
	cout<<"YES";
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
