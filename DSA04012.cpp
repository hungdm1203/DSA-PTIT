#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n],b[m],c[n+m-1];
		memset(c,0,sizeof(c));
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) c[i+j]+=a[i]*b[j];
		}
		for(int i=0;i<n+m-1;i++) cout<<c[i]<<" ";
		cout<<endl;
	}
}
