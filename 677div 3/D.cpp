#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a[5005],k=0;
        unordered_map<int,int>b;
        set<int>c;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        for(int i=0;i<n;i++){
            if(b[a[i]]==n){
                cout<<"NO"<<endl;
                k=1;
                break;
            }
            else if(b[a[i]]==1){
                cout<<"YES"<<endl;
                for(int j=0;j<n;j++){
                    if(i!=j) cout<<i+1<<" "<<j+1<<endl;
                }
                k=1;
                break;
            }
        }
        if(k) continue;
        int t1=a[0],t2,index2;
        for(int i=0;i<n;i++){
            if(a[i]!=t1){
                t2=a[i];
                index2=i;
                break;
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(a[i]!=t1&&i!=index2) cout<<1<<" "<<i+1<<endl;
            else if(a[i]==t1) cout<<index2+1<<" "<<i+1<<endl;
        }
    }
    return 0;
}