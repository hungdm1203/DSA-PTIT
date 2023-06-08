#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[1001][1001];
		for(int i=0;i<=n;i++){
			for(int j=0;j<=i;j++){
				if(j==i||j==0){
					a[i][j]=1;
				} else a[i][j]=(a[i-1][j-1]+a[i-1][j])%1000000007;
			}
		}
		cout<<a[n][k]<<endl;
	}
}
