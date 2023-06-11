#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<=n-m;i++){
			int max=a[i];
			for(int j=i+1;j<i+m;j++){
				if(a[j]>max) max=a[j];
			}
			cout<<max<<" ";
		}
		cout<<endl;
	}
}

