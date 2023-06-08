#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> v;
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		if(s=="PUSH"){
			int x;cin>>x;
			v.push_back(x);
		}
		if(s=="POP"&&v.size()!=0){
			v.pop_back();
		}
		
		if(s=="PRINT"&&v.size()!=0){
			cout<<v[v.size()-1]<<endl;
		} else if(s=="PRINT"&&v.size()==0) cout<<"NONE\n";
	}
}
