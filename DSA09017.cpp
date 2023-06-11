#include<bits/stdc++.h>
using namespace std;
int a[1001];
vector<int> v[1001];
vector<pair<int,int>> tree;

void tree_dfs(int u){
	a[u]=1;
	for(int i=0;i<v[u].size();i++){
		if(!a[v[u][i]]){
			tree.push_back({u,v[u][i]});
			tree_dfs(v[u][i]);
		}
	}
}

void nhap(){
	int n;cin>>n;
	memset(a,0,sizeof(a));
	for(int i=1;i<=n-1;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	tree_dfs(1);
	if(tree.size()==n-1){
		cout<<"YES\n";
	} else cout<<"NO\n";
	for(int i=1;i<=n;i++) v[i].clear();
	tree.clear();
}

main(){
	int t;cin>>t;
	while(t--){
		nhap();
	}
} 

