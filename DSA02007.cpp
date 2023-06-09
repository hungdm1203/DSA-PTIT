#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		for(int i=0;i<s.size();i++){
			if(n<1) break;
			int m=i;
			for(int j=i+1;j<s.size();j++){
				if(s[j]>s[m]){
					m=j;
				}
			}
			if(m==i) continue;
			string ss=s;
			for(int j=i+1;j<s.size();j++){
			    if(s[j]==s[m]){
			        string tmp=s;
			        swap(tmp[i],tmp[j]);
			        ss=max(tmp,ss);
			    }
			}
			s=ss;
			n--;
		}
		cout<<s<<endl;
	}
}
