#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n+1][m+1];
		memset(a,1e9+7,sizeof(a));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++) cin>>a[i][j];
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(i==1&&j==1) continue;
				a[i][j]=min({a[i-1][j-1],a[i-1][j],a[i][j-1]})+a[i][j];
			}
		}
		cout<<a[n][m]<<endl;
	}
}
