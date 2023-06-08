#include<bits/stdc++.h>
using namespace std;

void test(){
	string s;cin>>s;
	stack<int> st;
	for(int i=0;i<s.size();i++){
		if(s[i]==')'&&!st.empty()&&s[st.top()]=='('){
			st.pop();
		} else st.push(i);
	}
	vector<int> v;
	int n=s.size();
	while(!st.empty()){
		v.push_back(n-st.top()-1);
		n=st.top();
		st.pop();
	}
	v.push_back(n);
	long long sum=0;
	for(auto i:v) sum+=i;
	cout<<sum;
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
