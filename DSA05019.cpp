#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n+1][m+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++) cin>>a[i][j];
		}
		int v[n+1][m+1];
		int dem=0;
		memset(v,0,sizeof(v));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]==1){
					v[i][j]=min({v[i-1][j-1],v[i-1][j],v[i][j-1]})+1;
				} else v[i][j]=0;
				dem=max(dem,v[i][j]);
			}
		}
		cout<<dem<<endl;
	}
}
