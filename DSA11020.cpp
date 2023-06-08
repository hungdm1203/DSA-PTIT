#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		int check=1;
		sort(b,b+n);
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				check=0;break;
			}
		}
		cout<<check<<endl;
	}
} 
