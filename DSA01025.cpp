#include<bits/stdc++.h>
using namespace std;
int a[1000],n,k;
char x[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

void in(){
	for(int i=1;i<=k;i++) cout<<x[a[i]-1];
	cout<<endl;
}

void Try(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k){
			in();
		} else Try(i+1);
	}
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
	}
}
