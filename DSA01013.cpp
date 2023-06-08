#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;cin>>s;
		cout<<s[0];
		for(int i=1;i<s.size();i++){
			if(s[i-1]=='1'){
				if(s[i]=='1'){
					s[i]='0';
					cout<<s[i];
				} else{
					s[i]='1';
					cout<<s[i];
				}
			} else cout<<s[i];
		}
		cout<<endl;
	}
}
