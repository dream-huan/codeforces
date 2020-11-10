#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a[100005],maxm=1;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=2;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j+=i){
                if(a[j-i]<a[j]) sum++;
                else break;
            }
            maxm=max(sum,maxm);
        }
        cout<<maxm<<endl;
    }
    return 0;
}