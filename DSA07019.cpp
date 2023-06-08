#include<bits/stdc++.h>
using namespace std;

void test(){
	int n;cin>>n;
	long long a[n],l[n],r[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
		if(st.empty()) r[i]=n;
		else r[i]=st.top();
		st.push(i);
	}
	while(!st.empty()) st.pop();
	for(int i=0;i<n;i++){
	    while(!st.empty()&&a[st.top()]>=a[i]) st.pop();
	    if(st.empty()) l[i]=-1;
	    else l[i]=st.top();
	    st.push(i);
	}
	long long dt=0;
	for(int i=0;i<n;i++){
	    dt=max(dt,a[i]*(r[i]-l[i]-1));
	}
	cout<<dt;
}

int main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
