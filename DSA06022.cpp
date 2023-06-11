#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n]; 
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int m=1;
		for(int i=1;i<n;i++){
		    if(a[i]>a[0]){
		        cout<<a[0]<<" "<<a[i]<<endl;
		        break;
		    } else {
		        m=0;
		    }
		}
		if(m==0) cout<<"-1\n";
	} 
}
