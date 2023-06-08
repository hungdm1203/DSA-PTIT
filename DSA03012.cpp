#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int n=s.size();
		map<char,int> m;
		int maxx=0;
		for(int i=0;i<n;i++){
			m[s[i]]++;
			maxx=max(maxx,m[s[i]]);
		}	
		if(maxx<=(s.size()+1)/2) cout<<1; else cout<<-1;
		cout<<endl;
	}
}
