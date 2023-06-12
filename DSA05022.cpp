#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,x,y,z;cin>>n>>x>>y>>z;
		int f[n+1]; 
		f[1]=x;
    	for(int i=2;i<=n;++i) {
        	if (i%2==1)
        	    f[i]=min({f[i-1]+x,f[(i-1)/2]+x+z,f[(i+1)/2]+y+z});
        	else f[i]=min(f[i-1]+x,f[i/2]+z);
    	}
    cout<<f[n]<<endl;
	}
}
