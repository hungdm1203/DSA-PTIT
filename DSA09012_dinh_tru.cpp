#include<bits/stdc++.h>
using namespace std;
int vs[1001],n,m;
vector<int> adj[1001];
void dfs(int u){
	vs[u]=1;
	for(auto i:adj[u]){
		if(!vs[i]) dfs(i);
	}
}
void test(){
	cin>>n>>m;
	memset(vs,0,sizeof(vs));
	for(int i=1;i<=n;i++) adj[i].clear();
	while(m--){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int tplt=0;
	for(int i=1;i<=n;i++){
		if(!vs[i]){
			dfs(i);
			tplt++;
		}
	}
	for(int i=1;i<=n;i++){
		memset(vs,0,sizeof(vs));
		int x=0,lt=0;
		vs[i]=1;
		for(int j=1;j<=n;j++){
			if(!vs[j]){
				dfs(j);
				lt++;
			}
		}
		if(lt>tplt) cout<<i<<" ";
	}
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
