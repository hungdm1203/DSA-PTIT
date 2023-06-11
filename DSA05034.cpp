#include<bits/stdc++.h>
using namespace std;
const int x=1e9+7;
main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		long long a[100001];
		memset(a,0,sizeof(a));
		long long tmp=0;
		for(int i=1;i<=k;i++){
			a[i]=(tmp+1)%x;
			tmp=(tmp+a[i])%x;
		}
		for(int i=k+1;i<=n;i++){
			for(int j=1;j<=k;j++){
				a[i]=(a[i]+a[i-j])%x;
			}
		}
		cout<<a[n]<<endl;
	}
}

