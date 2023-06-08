#include<bits/stdc++.h>
using namespace std;
int n,a[100000],ok;

void ktao(){
	for(int i=1;i<=n;i++) a[i]=i;
}

void sinh(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i>=1){
		for(int j=n;j>i;j--){
			if(a[j]>a[i]){
				swap(a[i],a[j]);
				reverse(a+i+1,a+n+1);
				break;
			}
		}
	} else ok=0;
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		int b[n];
		for(int i=1;i<=n;i++) cin>>b[i];
		ktao();
		ok=1;
		int dem=0;
		while(ok){
			dem++;
			int x=1;
			for(int i=1;i<=n;i++){
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

