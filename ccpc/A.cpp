#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    n=t;
    while(t--){
        int a,b;
        cin>>a>>b;
        //if(a<1) cout<<"Case #"<<(n-t)<<": "<<0<<"/"<<b<<endl;
        //else{
            int gcd=__gcd(a*(a-1),(a+b)*(a+b-1));
            cout<<"Case #"<<(n-t)<<": "<<a*(a-1)/gcd<<"/"<<(a+b)*(a+b-1)/gcd<<endl;
        //}
    }
}