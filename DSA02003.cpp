#include<bits/stdc++.h>
using namespace std;
int n,a[100],v[100][100];
int check=0;

void kt(){
	int h=1,c=1;
	int ok=1;
	for(int i=1;i<=2*n-2;i++){
		if(a[i]==0) h++; else c++;
		if(v[h][c]==0||h>n||c>n){
			ok=0;break;
		}
	}
	if(ok){
		check=1;
		for(int i=1;i<=2*n-2;i++){
			if(a[i]==0) cout<<"D"; else cout<<"R";
		}
		cout<<" ";
	}
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==2*n-2) kt(); else Try(i+1);
	} 
}

main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) cin>>v[i][j];
		}
		if(v[1][1]==1){
			Try(1);
			if(check==0) cout<<-1;
			check=0;
		} else cout<<-1
		cout<<endl;
	}
} 
