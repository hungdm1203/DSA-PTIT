#include<bits/stdc++.h>
using namespace std;
int n,k,a[1000000],ok;

void ktao(){
	for(int i=1;i<=k;i++) cin>>a[i];
}

void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i>=1){
		a[i]++;
		for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
	} else{
		for(int j=1;j<=k;j++) a[j]=j;
	}
} 

void in(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		ktao();
		sinh();
		in();
	}
}
