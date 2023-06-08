#include<bits/stdc++.h>
using namespace std;
main(){
	int n;cin>>n;
	cin.ignore();
	int a[n][n];
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++){
		string s,tmp;getline(cin,s);
		stringstream ss(s);
		while(ss>>tmp){
			a[i][stoi(tmp)-1]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
		cout<<endl; 
	}
}
