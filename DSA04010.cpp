#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		int res=0;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++){
			int sum=0;
			for(int j=i;j<n;j++){
				sum+=a[j];
				res=max(res,sum);
			}
		}
		cout<<res<<endl;
	}
}
