#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		string s; cin>>s;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='1'){
				s[i]='0';
				break;
			} else s[i]='1';
		}
		for(int i=0;i<s.size();i++) cout<<s[i];
		cout<<endl;
	}
}

