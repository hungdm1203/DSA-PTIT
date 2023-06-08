#include<bits/stdc++.h>
using namespace std;
int x=1e9+7;
main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		if(k>n) cout<<0;
		else{
			long long s=1;
			for(int i=n;i>=n-k+1;i--){
				s=s*i;
				s=s%x;
			}
			cout<<s;
		}
		cout<<endl;
	}
}
