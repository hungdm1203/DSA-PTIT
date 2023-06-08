#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long po(long long a,long long b){
	if(b==0) return 1;
	if(b==1) return a;
	long long x=po(a,b/2);
	long long y=(x*x)%mod;
	if(b%2==0) return y;
	return (y*a)%mod;
}
main(){
	long long a,b;
	while(cin>>a>>b){
		if(a==0&&b==0) break;
		cout<<po(a,b)<<endl;
	}
}
