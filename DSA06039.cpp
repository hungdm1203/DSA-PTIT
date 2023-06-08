#include<bits/stdc++.h>
using namespace std;
main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		vector<int> v;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			int c=0;
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					v.push_back(a[i]);
					c=1;
					break;
				}
			}
			if(c==1){
				break;
			}
		}
		if(v.size()==0) cout<<"NO\n"; else cout<<v[0]<<endl;
	}
} 
