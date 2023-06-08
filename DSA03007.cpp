#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a,a+n);
		sort(b,b+n,cmp);
		long long s=0;
		for(int i=0;i<n;i++){
			s=s+a[i]*b[i];
		}
		cout<<s<<endl;
	}
}

