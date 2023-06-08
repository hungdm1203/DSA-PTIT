#include<bits/stdc++.h>
using namespace std;
main(){
	int n;cin>>n;
	int a[n][n];
	vector<int> v[10001];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) {
		    cin>>a[i][j]; 
		    if(a[i][j]==1){
		    	v[i+1].push_back(j+1);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
}

