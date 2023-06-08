#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		string x,y;cin>>x>>y;
		int n=x.size(), m=y.size();
		int a[n+1][m+1];
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(x[i-1]==y[j-1]) a[i][j]=max(a[i][j],a[i-1][j-1]+1);
				else a[i][j]=max(a[i-1][j],a[i][j-1]);
			}
		}
		cout<<a[n][m]<<endl;
	}
}
