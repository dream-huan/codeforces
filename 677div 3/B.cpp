#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a[55],ans1=0,ans2=0,di1=-1,di2,di3;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1&&di1==-1){
                di1=1;
                di2=i;
            }
            if(a[i]==1) di3=i;
        }
        for(int i=di2;i<di3;i++){
            if(a[i]==0) ans1++;
        }
        cout<<ans1<<endl;
    }
    return 0;
}