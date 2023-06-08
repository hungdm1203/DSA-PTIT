#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		long long x=b1000000000000;
		vector<long long> v;
		for(int i=1;i<n;i++){
			x=min(x,a[i]-a[i-1]);
		}
		cout<<x<<endl;
	}
} 
