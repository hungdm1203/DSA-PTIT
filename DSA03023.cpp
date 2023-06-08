#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int n; cin>>n; 
	int a[n]; 
	string s; cin>>s; 
	map<int,int> mp; 
	int dem = 0; 
	for(int i =0 ; i< n ; i++){ 
		if(s[i]=='X'){ 
			a[i]=0; mp[a[i]]++; 
		} 
		if(s[i]=='T'){ 
			a[i]=1; mp[a[i]]++; 
		} 
		if(s[i]=='D'){ 
			a[i]=2; mp[a[i]]++; 
		} 
	} 
	int i = 0; 
	while(i < mp[0]){ 
		if(a[i]==1){ 
			for(int j = mp[0]; j < mp[0] + mp[1]; j++){ 
				if(a[j]==0){ 
					swap(a[i],a[j]); dem++; 
					break; 
				} 
			} 
		} 
		if(a[i]==2){ 
			for(int j = mp[0] + mp[1]; j <n; j++){ 
				if(a[j]==0){ 
					swap(a[i],a[j]); dem++; 
					break; 
				} 
			} 
		} 
		i++; 
	} 
	for(int i=0 ; i<mp[0] ; i++){ 
		if(a[i] !=0) dem++; 
	} 
	for(int i=mp[0] ; i<mp[0]+ mp[1]; i++){ 
		if(a[i] != 1) dem++; 
	} 
	cout<<dem<<endl; 
}
