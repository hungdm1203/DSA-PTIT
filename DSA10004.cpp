#include<bits/stdc++.h>
using namespace std;
int a[1001];
vector<int> v[1001];
vector<int> p;

void dfs(int u){
	a[u]=1;
	p.push_back(u);
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
	dfs(1);
	int c=0;
	if(p.size()==n){
		for(int i=1;i<=n;i++){
			if(v[i].size()%2!=0){
				c++;
			}
		}
	} else cout<<0<<endl;
	if(c==0){
		cout<<2<<endl;
	} else if(c==2){
		cout<<1<<endl;
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
