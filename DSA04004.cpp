#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	long long a[50];
	a[1]=1;
	for(int i=2;i<=50;i++){
		a[i]=a[i-1]*2;
	}
	while(t--){
		long long n,k;cin>>n>>k;
		for(int i=n;i>=1;i--){
			if(k==a[i]){
				cout<<i<<endl;
				break;
			}
			if(k>a[i]) k=k-a[i];
		}
	}
}
