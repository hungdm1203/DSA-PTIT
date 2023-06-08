#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int check=1,n=s.size();
		s="s"+s;
		long long a[100];
		memset(a,0,sizeof(a));
		a[0]=1;
		for(int i=1;i<=n;i++){
			if(s[i]=='0'){
				if(i==0||(s[i-1]!='1'&&s[i-1]!='2')) check=0;
				a[i]=a[i-2];
			} else{
				a[i]=a[i-1];
				if(i>=2&&(s[i-1]=='1'||s[i-1]=='2'&&s[i]<='6')) a[i]+=a[i-2];
			}
		}
		if(check) cout<<a[n]<<endl; else cout<<0<<endl;
	}
}
