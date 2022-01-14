/* #include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        
    }
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>a;
    for(int i=0;i<100;i++) a.push_back(i),a.push_back(i+1);
    a.erase(unique(a.begin(),a.end()),a.end());
    for(int i:a) cout<<i<<" "; 
    return 0;
}