#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long n,k,sum=0;cin>>n>>k;
		long long a[n];
		int ok=0;
		set<long long> s;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum=sum+a[i];
			if(sum==k||s.find(sum-k)!=s.end()) ok=1;
			s.insert(sum);
		}
		
		if(ok) cout<<"YES\n"; else cout<<"NO\n";
	}
}
