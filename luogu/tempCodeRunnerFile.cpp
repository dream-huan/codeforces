#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1) cout<<0<<endl;
        else if(n==2) cout<<1<<endl;
        else if(n==3) cout<<3<<endl;
        else{
            cout<<n+n*(n-3)/2<<endl;
        }
    }
    return 0;
}