#include<bits/stdc++.h> 
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		vector<int> v[1001];
		int n,m;cin>>n>>m;
		for(int i=0;i<m;i++){
			int x,y;cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		for(int i=1;i<=n;i++){
			cout<<i<<": ";
			for(int j=0;j<v[i].size();j++){
				cout<<v[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
