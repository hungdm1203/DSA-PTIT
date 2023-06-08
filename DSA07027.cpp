#include<bits/stdc++.h>
using namespace std;
void test(){
	int n;cin>>n;
	int a[n],b[n];
	for(auto &i:a) cin>>i;
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		while(!st.empty()&&st.top()<=a[i]) st.pop();
		if(st.empty()) b[i]=-1;
		else b[i]=st.top();
		st.push(a[i]);
	}
	for(auto i:b) cout<<i<<" ";
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
