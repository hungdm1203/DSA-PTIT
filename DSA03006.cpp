#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		vector<int> v;
		for(int i=0;i<n;i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(),v.end());
		int x=1;
		for(int i=0;i<n;i++){
			if((a[i]==v[i]||a[i]==v[n-1-i])&&(a[n-i-1]==v[n-i-1]||a[n-i-1]==v[i])){
				x=1;
			} else{
				x=0;break;
			}
		}
		if(x==1) cout<<"Yes\n"; else cout<<"No\n";
	}
}

