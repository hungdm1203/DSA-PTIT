#include<bits/stdc++.h>
using namespace std;

main(){
	int t;cin>>t;
	while(t--){
		string s1,s2;cin>>s1>>s2;
		long long ss1=0,ss2=0;
		for(int i=0;i<s1.size();i++){
			if(s1[i]=='1') ss1+=pow(2,s1.size()-i-1);
		}
		for(int i=0;i<s2.size();i++){
			if(s2[i]=='1') ss2+=pow(2,s1.size()-i-1);
		}
		cout<<ss1*ss2<<endl;
	}
}
