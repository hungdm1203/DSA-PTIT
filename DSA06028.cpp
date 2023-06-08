#include <bits/stdc++.h>
using namespace std;
int main() {
        int n;cin>>n;
        vector<int> a(n);
        vector<vector<int>> v;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
        	int x=i;
        	for(int j=i+1;j<n;j++){
        		if(a[x]>a[j]) x=j;
			}
			swap(a[i],a[x]);
			v.push_back(a);	
		}
		for(int i=v.size()-1;i>=0;i--){
			cout<<"Buoc "<<i+1<<": ";
			for(int j=0;j<n;j++) cout<<v[i][j]<<" ";
			cout<<endl;
		}
    }
