#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		int x,y=0;
		for(auto i:m){
			if(i.second>y){
				y=i.second;
				x=i.first;
			}
		}
		if(y>n/2) cout<<x<<endl; else cout<<"NO\n";
	}
}

