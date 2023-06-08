#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int k;cin>>k;
		string s;cin>>s;
		map<char,int> m;
		for(int i=0;i<s.size();i++){
			m[s[i]]++;
		}
		vector<int> v;
		for(map<char,int>::iterator it=m.begin();it!=m.end();it++){
			v.push_back((*it).second);
		} 
		sort(v.begin(),v.end());
		while(k>0){
			v[v.size()-1]--;
			k--;
			sort(v.begin(),v.end());
		}
		long long sum=0;
		for(int i=0;i<v.size();i++){
			sum=sum+pow(v[i],2);
		}
		cout<<sum<<endl;
	}
} 
