#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> v;
	string s;
	while(cin>>s&&v.size()<200){
		if(s=="push"){
			int x;cin>>x;
			v.push_back(x);
		}
		if(s=="pop"&&v.size()!=0){
			v.pop_back();
		} else if(s=="pop"&&v.size()==0) cout<<"empty\n";
		
		if(s=="show"&&v.size()!=0){
			for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
			cout<<endl;
		} else if(s=="show"&&v.size()==0) cout<<"empty\n";
	}
}
