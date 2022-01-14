#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<int>d1;
    vector<int>d2;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) d1.push_back(a[i]+1),d2.push_back(b[i]);
    }
    sort(d1.begin(),d1.end());
    sort(d2.begin(),d2.end());
    for(int i=0;i<d1.size();i++){
        if(d1[i]!=d2[i]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        cout<<(solve()?"YES":"NO")<<"\n";
    }
    return 0;
}


/* 
1 0 2 4 5
1 1 2 4 5
 */