#include<bits/stdc++.h>
using namespace std;

void test(){
	string s;cin>>s;
	stack<string> st;
	int i=s.size()-1;
	while(i>=0){
		if(s[i]==']'){
			st.push(string(1,s[i]));
			i--;
		}else if(s[i]>='a'&&s[i]<='z'){
			string res="";
			while(s[i]>='a'&&s[i]<='z'){
				res=s[i]+res;
				i--;
			}
			st.push(res);
		} else if(s[i]>='0'&&s[i]<='9'){
			int x=0;
			int dem=0;
			while(s[i]>='0'&&s[i]<='9'){
				x=pow(10,dem)*(s[i]-'0')+x;
				i--;
				dem++;
			}
			string ss="";
			while(!st.empty()&&st.top()!="]"){
				ss=ss+st.top();
				st.pop();
			}
			string s1="";
			for(int k=1;k<=x;k++) s1+=ss;
			st.pop();
			st.push(s1);
		} else i--;
	}
	while(!st.empty()){
		if(st.top()!="]"){
			cout<<st.top();
			st.pop();
		} else st.pop();
	}
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
