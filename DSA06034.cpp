#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long n,k;cin>>n>>k;
		long long a[n];
		map<long long,long long> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		long long dem=0;
		for(int i=0;i<n;i++){
			if(m[k-a[i]]){
				dem+=m[k-a[i]];
				
			}
			if(2*a[i]==k) dem--;
		}
		cout<<dem/2<<endl;
	}
}
