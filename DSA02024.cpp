// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001];
vector<vector<int>> v;
bool cmp(vector<int> a,vector<int> b){
    string x="",y="";
    for(auto i:a) x=x+to_string(i)+" ";
    for(auto i:b) y=y+to_string(i)+" ";
    x.pop_back();y.pop_back();
    return x<y;
}
void solve(){
    vector<int> vs;
    for(int i=1;i<=n;i++){
        if(a[i]==1) vs.push_back(b[i]);
    }
    if(vs.size()>=2){
        int check=1;
        for(int i=0;i<vs.size()-1;i++){
            if(vs[i]>vs[i+1]) check=0;
        }
        if(check) v.push_back(vs);
    }
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n) solve(); 
        else Try(i+1);
    }
}
int main() {
    cin>>n;
    for(int i=1;i<=n;i++) cin>>b[i];
    Try(1);
    sort(v.begin(),v.end(),cmp);
    for(auto i:v){
        for(auto j:i) cout<<j<<" ";
        cout<<endl;
    }
}
