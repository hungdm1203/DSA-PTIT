#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int d;cin>>d;
		string s;cin>>s;
		map<char,int> m;
		int maxx=0;
		for(int i=0;i<s.size();i++){
			m[s[i]]++;
			maxx=max(maxx,m[s[i]]);
		}	
		if(maxx <= ceil((float)s.size()/d)) cout<<1; else cout<<-1;
		cout<<endl;
	}
}
