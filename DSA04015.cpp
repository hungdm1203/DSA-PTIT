#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long n,k;cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int x=upper_bound(a,a+n,k)-a;
		if(x>0) cout<<x; else cout<<-1; 
		cout<<endl;
	}
}
