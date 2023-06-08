#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		long long x=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			x+=a[i];
		}
		sort(a,a+n);
		k=min(k,n-k);
		for(int i=0;i<k;i++) x=x-a[i]*2;
		cout<<x<<endl;
	}
}
