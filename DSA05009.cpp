#include<bits/stdc++.h>
using namespace std;
int a[1001],check;
long long n,sum;
void Try(int i,long long s){
	if(s>sum/2) return;
	if(s==sum/2){
		check=1;
		return;
	}
	if(check) return;
	for(int j=i;j<=n;j++) Try(j+1,s+a[i]);
}
main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		sum=0;
		check=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			sum=sum+a[i];
		}
		if(sum%2==0){
			Try(1,0);
		}
		if(check) cout<<"YES\n"; else cout<<"NO\n";
	}
}
