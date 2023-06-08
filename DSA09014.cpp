#include<bits/stdc++.h>
using namespace std;
int vs[1001],n,m,ok;
vector<int> adj[1001];

void dfs(int u,int k){
	if(ok) return;
	vs[u]=1;
	for(auto i:adj[u]){
		if(!vs[i]){
			dfs(i,u);
		} else if(vs[i]&&i!=k){
			ok=1;
		}
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
	ok=0;
	for(int i=1;i<=n;i++){
		if(!vs[i]){
			dfs(i,0);
		}
	}
	if(ok) cout<<"YES"; else cout<<"NO";
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
