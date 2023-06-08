#include<bits/stdc++.h>
using namespace std;
int a[1000],n;

void in(){
	int c=1;
	for(int i=1;i<=n;i++){
		if(a[1]!=1||a[n]!=0||(a[i]==1&&a[i+1]==1)){
			c=0;break;
		}
	}
	if(c==1){
		for(int i=1;i<=n;i++){
			if(a[i]==1) cout<<"H"; else cout<<"A";
		}
		cout<<endl;
	}
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			in();
		} else Try(i+1);
	}
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n; 
		Try(1);
	}
}
