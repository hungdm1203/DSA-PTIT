#include<bits/stdc++.h>
using namespace std;
int vs[1001],n,m,ok;
vector<int> adj[1001];

void dfs(int u){
	if(ok) return;
	vs[u]=1;
	for(auto i:adj[u]){
		if(!vs[i]) dfs(i);
		else if(vs[i]==1){
			ok=1;return;
		}
	}
	vs[u]=2;
}

void test(){
	cin>>n>>m;
	memset(vs,0,sizeof(vs));
	for(int i=1;i<=n;i++) adj[i].clear();
	while(m--){
		int x,y;cin>>x>>y;
		adj[x].push_back(y); 
	}
	ok=0;
	for(int i=1;i<=n;i++){
		if(!vs[i]){
			dfs(i);
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
