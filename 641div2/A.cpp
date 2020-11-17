#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n,k,ans;
        cin>>n>>k;
        long long temp=-1;
        for(int j=2;j*j<=n;j++){
            if(n%j==0){
                temp=j;
                break;
            }
        }
        if(temp==-1) temp=n;
        n+=temp;
        cout<<n+(k-1)*2<<endl;
    }
    return 0;
}