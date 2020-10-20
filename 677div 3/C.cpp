#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a[300005],maxm=-1,madi=-1,ans=1,temp=-1;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            /*if(a[i]>=maxm&&i==0&&a[i+1]<maxm){
                maxm=a[i];
                madi=i;
            }
            if(a[i]>=maxm&&i==n-1&&a[i-1]<maxm){
                maxm=a[i];
                madi=i;
            }*/
            if(i>=1&&a[i]==a[i-1]) ans++;
        }
        for(int i=0;i<n;i++){
            if(a[i]>=maxm&&temp==-1){
                maxm=a[i];
                temp=1;
            }
            if(a[i]>=maxm&&(a[i-1]<maxm||a[i+1]<maxm)){
                maxm=a[i];
                madi=i;
            }
        }
        if(ans==n) cout<<-1<<endl;
        else cout<<madi<<endl;
    }
    return 0;
}