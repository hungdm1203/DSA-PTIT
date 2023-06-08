#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[1000];

void ktao(){
	for(int i=1;i<=n;i++) a[i]=0;
}
void sinh(){
	int i=n;
	for(i=n;i>=1;i--){
		if(a[i]==0){
			a[i]=1;
			break;
		} else a[i]=0;
	} 
	if(i<1) ok=0;
}
void in(){
	int s=0;
	for(int i=1;i<=n;i++) s+=a[i];
	if(s==k) {
		for(int i=1;i<=n;i++) cout<<a[i];
		cout<<endl;	
	}
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		ok=1;
		ktao();
		while(ok){
			in();
			sinh();
		}
		
		
	}
}
