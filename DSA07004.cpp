#include<bits/stdc++.h>
using namespace std;
void test(){
	string s;cin>>s;
	stack<char> st;
	int dem=0;
	if(s[0]==')'){
		s[0]='(';
		dem++;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='(') st.push(s[i]);
		else{
			if(st.empty()){
				s[i]='(';
				st.push(s[i]);
				dem++;
			} else st.pop();
		}
	}
	cout<<st.size()/2+dem;
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
