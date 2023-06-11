#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n],b[k];
		map<int,int> m;
		vector<int> v;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		for(int i=0;i<k;i++){
			cin>>b[i];
			m[b[i]]++;
		}
		for(auto i:m){
			cout<<i.first<<" ";
			if(i.second>1) v.push_back(i.first);
		}
		cout<<endl;
		for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
		cout<<endl;
	}
}
