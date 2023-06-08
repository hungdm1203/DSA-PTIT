#include<bits/stdc++.h>
using namespace std;
vector<int> v[1001];
int a[1001];
void bfs(int u){
	queue<int> q;
	q.push(u);
	a[u]=1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(auto i:v[x]){
			if(!a[i]){
				a[i]=1;
				q.push(i);
			}
		}
	}
}
void test(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) v[i].clear();
	memset(a,0,sizeof(a));
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int dem=0;
	for(int i=1;i<=n;i++){
		if(!a[i]){
			dem++;bfs(i);
		}
	}
	cout<<dem;
}
main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
