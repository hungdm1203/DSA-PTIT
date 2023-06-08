#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> v[100];
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			v[0].push_back(a[i]);
		}
		for(int i=1;i<n;i++){
		    for(int j=0;j<v[i-1].size()-1;i++){
		    	v[i].push_back(v[i-1][j]+v[i-1][j+1]);
			}
		}
		for(int i=0;i<n;i++){
			cout<<"[";
			for(int j=0;j<v[i].size();j++){
				if(j!=v[i].size()-1)  cout<<v[i][j]<<" "; else cout<<v[i][j];
			}
			cout<<"]\n";
		}
	}
}

