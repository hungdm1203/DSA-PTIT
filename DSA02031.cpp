#include <bits/stdc++.h>
using namespace std;
char a[1001];
int b[1001],n;
char x[9]={'*','A','B','C','D','E','F','G','H'};

void solve(){
    int ok=1;
    for(int i=2;i<n;i++){
        if(a[i]=='A'&&a[i-1]!='E'&&a[i+1]!='E'){
            ok=0;
        }
        if(a[i]=='E'&&a[i-1]!='A'&&a[i+1]!='A'){
            ok=0;
        }
    }
    if(ok){
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<endl;
    }
}

void Try(int i) {
    for(int j=1;j<=n;j++){
        if(!b[j]){
            a[i]=x[j];
            b[j]=1;
            if(i==n) solve(); else Try(i+1);
            b[j]=0;
        }
    }
}

int main() {
    char k;cin>>k;
    for(int i=1;i<=8;i++) if(k==x[i]) n=i;
    Try(1);
}
