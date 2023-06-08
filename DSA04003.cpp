#include<bits/stdc++.h>
using namespace std;
const int mod=123456789;
long long po(long long n,long long k){
	if(k==0) return 1;
	if(k==1) return n;
	long long x=po(n,k/2);
	long long y= (x*x)%mod;
	if(k%2==0) return y;
	return (y*n)%mod;
}
main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		cout<<po(2,n-1)<<endl;
	}
}
