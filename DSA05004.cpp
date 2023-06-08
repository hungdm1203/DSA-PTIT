#include<bits/stdc++.h>
using namespace std;
main(){
	int n;cin>>n;
	int a[n],v[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		v[i]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				v[i]=max(v[i],v[j]+1);
			}
		}
	}
	sort(v,v+n);
	cout<<v[n-1];
}
