#include<bits/stdc++.h>
using namespace std;
int a[1001],degc[1001],degt[1001];
vector<int> v[1001];
vector<int> p;

void dfs(int u){
	a[u]=1;
	p.push_back(u);
	for(auto x:v[u]){
		if(!a[x]) dfs(x);
	}
}

void nhap(){
	int n,m;cin>>n>>m;
	memset(a,0,sizeof(a));
	memset(degc,0,sizeof(degc));
	memset(degt,0,sizeof(degt));
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
		degc[x]++;
		degt[y]++;
	}
	dfs(1);
	int check=1;
	for(int i=1;i<=n;i++){
		if(degc[i]!=degt[i]){
			check=0;
			break;
		}
	}
	if(p.size()==n){
		if(check==1) cout<<1<<endl; else cout<<0<<endl;
	} else cout<<0<<endl;
	for(int i=1;i<=n;i++) v[i].clear();
	p.clear();
}

main(){
	int t;cin>>t;
	while(t--){
		nhap();
	}
}
