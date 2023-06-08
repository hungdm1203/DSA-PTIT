#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		int s=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s+=a[i];
		}
		int x=a[0],c=0;
		for(int i=1;i<n-1;i++){
			if(x==s-x-a[i]){
				c=i+1;break;
			}
			x+=a[i];
		}
		if(c!=0) cout<<c<<endl; else cout<<"-1\n";
	}
}
