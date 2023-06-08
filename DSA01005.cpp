#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001];

void in(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(!b[j]){
			b[j]=1;
			a[i]=j;
			if(i==n) in(); else Try(i+1);
			b[j]=0;
		}
	}
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		memset(b,0,sizeof(b));
		Try(1);
		cout<<endl;
	}
}
