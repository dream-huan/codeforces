#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    if(a<0) a*=-1;
    if(b<0) b*=-1;
    return a<b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
       long long n,x[100005],y[100005],k1=0,k2=0;
       long double ans=0;
       cin>>n;
        for(int i=0;i<2*n;i++){
            int xx,yy;
            cin>>xx>>yy;
            if(xx==0) x[k1++]=yy;
            else if(yy==0) y[k2++]=xx;
        }
        sort(x,x+n,cmp);
        sort(y,y+n,cmp);
        for(int i=0;i<n;i++){
            ans+=sqrt(x[i]*x[i]+y[i]*y[i]);
        }
        cout<<fixed<<setprecision(13)<<ans<<endl;
    }
    return 0;
}