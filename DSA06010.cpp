#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n]; 
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			while(a[i]>0){
				int x=a[i]%10;
				a[i]/=10;
				m[x]++;	
			}
		}
		for(auto i:m){
			cout<<i.first<<" ";
		}
		cout<<endl;
	} 
}
