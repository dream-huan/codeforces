#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n,a[105],k=1;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]<i){
                k=0;
                break;
            }
            a[i+1]=a[i+1]+a[i]-i;
        }
        k==0?cout<<"NO"<<endl:cout<<"YES"<<endl;
    }
    return 0;
}