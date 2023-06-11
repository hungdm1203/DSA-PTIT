#include<bits/stdc++.h>
using namespace std;
int n,k,dem=0;
int a[1001],b[1001];

void solve(){
	int c=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1) c+=b[i]; 
	}
	if(c==k){
		dem++;
		for(int i=1;i<=n;i++){
			if(a[i]==1) cout<<b[i]<<" ";
		}
		cout<<endl;
	}	
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n) solve(); else Try(i+1);
	}
}

main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	Try(1);
	cout<<dem;
}

