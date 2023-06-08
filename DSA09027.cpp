#include<bits/stdc++.h>
using namespace std;
int a[1001];
vector<int> v[1001];

void dfs(int u){
	a[u]=1;
	for(int i=0;i<v[u].size();i++){
		if(!a[v[u][i]]) dfs(v[u][i]);
	}
} 

void nhap(){
	int n,m;cin>>n>>m;
	memset(a,0,sizeof(a));
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int q;cin>>q;
	while(q--){
		int t,s;cin>>t>>s;
		memset(a,0,sizeof(a));
		dfs(t);
		if(a[s]) cout<<"YES\n"; else cout<<"NO\n";
	}
	for(int i=1;i<=n;i++) v[i].clear();
}

main(){
	int t;cin>>t;
	while(t--){
		nhap();
		cout<<endl;
	}
}
