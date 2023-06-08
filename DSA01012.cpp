#include<bits/stdc++.h>
using namespace std;
int a[100],n,ok;

void sinh(){
	int i;
	for(i=n;i>=1;i--){
		if(a[i]==0){
			a[i]=1;
			break;
		} else a[i]=0;
	}
	if(i<1) ok=0;
}

void in(){
	cout<<a[1];
	for(int i=2;i<=n;i++){
		if(a[i-1]==1){
			if(a[i]==1) cout<<0; else cout<<1;
		} else cout<<a[i];
	}
	cout<<" ";
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		memset(a,0,sizeof(a));
		ok=1;
		while(ok){
			in();
			sinh();
		}
		cout<<endl;
	}
}
