#include<bits/stdc++.h>
using namespace std;
void test(){
	int n;cin>>n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++) cin>>a[i];
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		while(!st.empty()&&a[st.top()]<=a[i]) st.pop();
		if(st.empty()) b[i]=-1;
		else b[i]=st.top();
		st.push(i);
	}
	for(int i=0;i<n;i++){
		int check=1;
		if(b[i]==-1) cout<<-1<<" ";
		else{
			for(int j=b[i]+1;j<n;j++){
				if(a[b[i]]>a[j]){
					check=0;
					cout<<a[j]<<" ";
					break;
				}
			}
			if(check==1) cout<<-1<<" ";	
		}
	}
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
