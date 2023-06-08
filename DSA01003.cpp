#include<bits/stdc++.h>
using namespace std;
int n,a[1000000];

void ktao(){
	for(int i=1;i<=n;i++) cin>>a[i];
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
				sort(a+i+1,a+n+1);
				break;
			}
		}
	} else {
		for(int j=1;j<=n;j++) a[j]=j;
	}
} 

void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		ktao();
		sinh();
		in();
	}
}
