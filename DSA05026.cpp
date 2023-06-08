#include<bits/stdc++.h>
using namespace std;
main(){
	int c,n;cin>>c>>n;
	int a[n],s[c+1];
	for(int i=0;i<n;i++) cin>>a[i];
	memset(s,0,sizeof(s));
	s[0]=1;
	for(int i=0;i<n;i++){
		for(int j=c;j>=a[i];j--){
			if(s[j-a[i]]==1) s[j]=1;
		}
	}
	for(int i=c;i>=0;i--){
		if(s[i]==1){
			cout<<i<<endl;
			break;
		}
	}
}
