#include<bits/stdc++.h>
using namespace std;
main(){
	int n;cin>>n;
	cin.ignore();
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		string s,tmp;getline(cin,s);
		stringstream ss(s);
		while(ss>>tmp){
			if(stoi(tmp)>i+1) v.push_back({i+1,stoi(tmp)});
		}
	}
	for(int i=0;i<v.size();i++) cout<<v[i].first<<" "<<v[i].second<<endl; 
}
