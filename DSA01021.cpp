#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[k];
		set<int> s;
		for(int i=1;i<=k;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		int i=k;
		while(i>=1&&a[i]==n-k+i){
			i--;
		}
		int check=1;
		if(i>=1){
			a[i]++;
			for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
		} else check=0;
		for(int j=1;j<=k;j++){
			s.insert(a[j]);
		}
		if(check==1) cout<<s.size()-k<<endl; else cout<<k<<endl;
	}
}
