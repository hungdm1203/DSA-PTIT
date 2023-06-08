#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		long long n,k;cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int dem=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				long long x=k-a[i]-a[j];
				dem+=lower_bound(a+j+1,a+n,x)-a-j-1;
			}
		}
		cout<<dem<<endl;
	}
}
// 1 3 4 5 7
// 134 135 145 137
