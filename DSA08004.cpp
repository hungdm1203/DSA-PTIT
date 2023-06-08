#include<bits/stdc++.h>
using namespace std;

void test(){
	int n;cin>>n;
	string s;cin>>s;
	map<char,int> m;
	for(int i=0;i<s.size();i++){
		m[s[i]]++;
	}
	vector<int> v;
	for(map<char,int> ::iterator it=m.begin();it!=m.end();it++){
		v.push_back((*it).second);
	}
	while(n>0){
		sort(v.begin(),v.end());
		v[v.size()-1]--;
		n--;
	}
	long long sum=0;
	for(auto i:v) sum+=pow(i,2);
	cout<<sum;
}

main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<endl;
	}
}
