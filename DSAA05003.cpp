#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,m,p;cin>>n>>m>>p;
		string x,y,z;cin>>x>>y>>z;
		int a[n+1][m+1][p+1];
		int dem=0;
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				for(int k=1;k<=p;k++){
					if(x[i-1]==y[j-1]&&x[i-1]==z[k-1]){
						a[i][j][k]=a[i-1][j-1][k-1]+1;
					} else a[i][j][k]=max({a[i-1][j][k],a[i][j-1][k],a[i][j][k-1]});
					dem=max(dem,a[i][j][k]);
				}
			}
		}
		cout<<dem<<endl;
	}
}
