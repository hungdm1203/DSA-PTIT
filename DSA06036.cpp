#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int c=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(binary_search(a+j+1,a+n,k-a[i]-a[j])){
					c=1;
					break;
				}
			}
			if(c==1) break;
		}
		if(c==1) cout<<"YES\n"; else cout<<"NO\n";
	}
}
