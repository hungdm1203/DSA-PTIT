#include<bits/stdc++.h>
using namespace std;
main(){
	int n;cin>>n;
	int a[n],b[n];
	int x=INT_MAX;
	for(int i=0;i<n;i++){
		cin>>a[i];
		x=min(x,a[i]);
	}
	long long sum=0;
	while(x>1){
		int check=1;
		for(int i=0;i<n;i++){
			b[i]=a[i]/x;
		}
		for(int i=0;i<=n-2;i++){
			if(a[i]/b[i]!=a[i+1]/b[i+1]){
				check=0;break;
			}
		}
		if(check==1){
			for(int i=0;i<n;i++){
				b[i]=a[i]/(x+1)+1;
				sum+=b[i];
			}
			break;
		}
		x--;
	}
	cout<<sum<<endl;
}
