#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        vector<int>even;
        vector<int>odd;
        cin>>n;
        for(int i=0;i<n;i++) cin>>temp,temp&1?even.push_back(temp):odd.push_back(temp);
        for(int i=0;i<even.size();i++) cout<<even[i]<<" ";
        for(int i=0;i<odd.size();i++) cout<<odd[i]<<" ";
        cout<<endl;
    }
    return 0;
}