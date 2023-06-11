#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> m;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			m[x]++;
		}
		vector<int> v1,v2;
		for(auto x:m){
			v1.push_back(x.first);
			v2.push_back(x.second);
		}
		for(int i=0;i<v2.size()-1;i++){
			for(int j=i+1;j<v2.size();j++){
				if(v2[i]<v2[j]){
					swap(v2[i],v2[j]);
					swap(v1[i],v1[j]);
				}
				if(v2[i]==v2[j]&&v1[i]>v1[j]){
					swap(v1[i],v1[j]);
				}
			}
		}
		for(int i=0;i<v1.size();i++){
			for(int j=0;j<v2[i];j++) cout<<v1[i]<<" ";
		}
		cout<<endl;
	}
}

