#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		long long a[s.size()];
		a[0]=s[0]-'0';
		long long sum=a[0];
		for(int i=1;i<s.size();i++){
			int x=s[i]-'0';
			a[i]=a[i-1]*10+x*(i+1);
			sum+=a[i];
		}
		cout<<sum<<endl;
	}
}
