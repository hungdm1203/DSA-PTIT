#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n){
	for(int i=0;i<n;i++){
		int c=1;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				c=0;
			}
		}
		if(c==1) break;
		cout<<"Buoc "<<i+1<<": ";
		for(int j=0;j<n;j++) cout<<a[j]<<" ";
		cout<<endl;
	}
}
main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	bubblesort(a,n);	
}
//5 3 2 8 6 4
//3 5 2 8 6 4
//3 2 5 8 6 4
//2 3 5 8 6 4
//2 3 5 6 8 4
