#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		int inc[n+1],dec[n+1];
		inc[1]=dec[n]=1;
		for(int i=2;i<=n;i++){
			if(a[i]>a[i-1]) inc[i]=inc[i-1]+1;
			else inc[i]=1;
		}
		for(int i=n-1;i>=1;i--){
			if(a[i]>a[i+1]) dec[i]=dec[i+1]+1;
			else dec[i]=1;
		}
		int ok=0;
		for(int i=1;i<=n;i++){
			ok=max(ok,inc[i]+dec[i]-1);
		}
		cout<<ok<<endl;
	}
}
