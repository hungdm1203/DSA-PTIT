#include<bits/stdc++.h>
using namespace std;
int a[1001][1001],n,m;
int dx[9]={-1,-1,-1,0,0,0,1,1,1};
int dy[9]={-1,0,1,-1,0,1,-1,0,1};

void dfs(int i,int j){
	a[i][j]=0;
	for(int k=0;k<9;k++){
		int x=i+dx[k];
		int y=j+dy[k];
		if(x>=0&&x<n&&y>=0&&y<m&&a[x][y]==1) dfs(x,y);
	}
}

void test(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>a[i][j];
	}	
	int dem=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==1){
				dfs(i,j);
				dem++;
			}
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
