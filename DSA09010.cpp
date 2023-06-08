#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
int a[1001];
vector<int> path;
void dfs(int u){
	path.push_back(u);
	a[u]=1;
	for(auto x:v[u]){
		if(!a[x]){
			dfs(x);
		}
	}
}
void test(){
	int n,m;cin>>n>>m;
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++) v[i].clear();
	path.clear();
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
	}
	for(int i=1;i<=n;i++){
		dfs(i);
		if(path.size()!=n){
			cout<<"NO";
			return;
		}
		memset(a,0,sizeof(a));
		path.clear();
	}
	cout<<"YES";
	return;
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
