#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int k;
		string a,b;
		cin>>k>>a>>b;
		string s="";
		while(a.size()<b.size()) a='0'+a;
		while(b.size()<a.size()) b='0'+b;
		int nho=0;
		for(int i=a.size()-1;i>=0;i--){
			s=to_string((a[i]-'0'+b[i]-'0'+nho)%k)+s;
			nho=(a[i]-'0'+b[i]-'0'+nho)/k;
		}
		if(nho>0) s=to_string(nho)+s;
		cout<<s<<endl;;
	}
}
