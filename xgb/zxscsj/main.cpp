#include<bits/stdc++.h>
using namespace std;

struct t{
    int ta,tb;
}times[100];

bool cmp(t a,t b){
    if(a.ta+a.tb==b.ta+b.tb) return a.tb<b.tb;
    else return a.ta+a.tb>b.ta+b.tb;
}

int T,ans,maxm=-1;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>T;
    for(int i=0;i<T;i++){
        int ta,tb;
        cin>>ta>>tb;
        times[i].ta=ta;
        times[i].tb=tb;
    }
    sort(times,times+T,cmp);
    for(int i=0;i<T;i++){
        ans+=times[i].tb;
        maxm=max(maxm,ans+times[i].ta);
    }
    cout<<maxm<<endl;
    return 0;
}