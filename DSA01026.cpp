#include<bits/stdc++.h>
using namespace std;
int a[1000],n;
void in(){
	int c=1;
	for(int i=1;i<=n-1;i++){
		if(a[1]!=1||a[n]!=0||(a[i]==1&&a[i+1]==1)){
			c=0;
			break;
		}
	}
	for(int i=1;i<=n-3;i++){
		if(a[1]!=1||a[n]!=0||(a[i]==0&&a[i+1]==0&&a[i+2]==0&&a[i+3]==0)){
			c=0;
			break;
		}
	}
	if(c==1){
		for(int i=1;i<=n;i++){
			if(a[i]==1) cout<<8; else cout<<6;
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
	cin>>n;
	Try(1);
}

