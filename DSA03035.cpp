#include<bits/stdc++.h>
using namespace std;
main(){
	int n;cin>>n;
	int a[n+1]={};
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a[x]=a[x-1]+1;
	}
	sort(a,a+n+1);
	cout<<n-a[n];
}



