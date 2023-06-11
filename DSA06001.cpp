#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(int i=n-1;i>n/2;i--) cout<<a[i]<<" "<<a[n-i-1]<<" ";
		if(n%2==0) cout<<a[n/2]<<" "<<a[n-n/2-1]<<endl; else cout<<a[(n-1)/2]<<endl;
	}
}

