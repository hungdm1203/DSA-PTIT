#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long a[n],s[n];
		for(int i=0;i<n;i++) cin>>a[i];
		s[0]=a[0];s[1]=max(a[0],a[1]);
		for(int i=2;i<n;i++){
			s[i]=max(s[i-2]+a[i],s[i-1]);
		}
		cout<<s[n-1]<<endl;
	}
}
