#include<bits/stdc++.h>
using namespace std;
void test(){
	string s;cin>>s;
	stack<int> st;
	int n=s.size();
	for(int i=0;i<n;i++){
		if(s[i]==')'&&!st.empty()&&s[st.top()]=='('){
			st.pop();
		}else st.push(i);
	}
	vector<int> v;
	while(!st.empty()){
		v.push_back(n-st.top()-1);
		n=st.top();
		st.pop();
	}
	v.push_back(n);
	sort(v.begin(),v.end());
	cout<<v[v.size()-1];
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
