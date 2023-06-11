#include<bits/stdc++.h>
using namespace std;
int a[1000001];
void sang(){
	for(int i=0;i<1000001;i++) a[i]=1;
	a[0]=a[1]=0;
	for(int i=2;i<=1000;i++){
		if(a[i]==1){
			for(int j=i*i;j<1000001;j=j+i){
				a[j]=0;
			}
		}
	}
}
main(){
	int t;cin>>t;
	sang();
	while(t--){
		int n;cin>>n;
		int c=1;
		for(int i=2;i<=n/2;i++){
			if(a[i]==1&&a[n-i]==1){
				cout<<i<<" "<<n-i<<endl;
				c=1;
				break;
			} else c=0;
		}
		if(c==0) cout<<"-1"<<endl;
	}
}

