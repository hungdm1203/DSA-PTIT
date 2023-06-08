#include<bits/stdc++.h>
using namespace std;
int n,a[100000],ok,k;

void ktao(){
	for(int i=1;i<=k;i++) a[i]=i;
}

void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i>=1){
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
	} else ok=0;
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		int b[k];
		for(int i=1;i<=k;i++) cin>>b[i];
		ktao();
		ok=1;
		int dem=0;
		while(ok){
			dem++;
			int x=1;
			for(int i=1;i<=k;i++){
				if(a[i]!=b[i]){
					x=0;break;
				}
			}
			if(x==1){
				cout<<dem<<endl;
				break;
			}
			sinh();
		}
	}
}

