#include<bits/stdc++.h>
using namespace std;

bitset<100005> isprime;
int prime[100005];
int cnt=0;

void ai(int n){
    isprime[1]=0;
    for(int i=2;i<=n;i++){
        if(isprime[i]) prime[++cnt]=i;
        for(int j=1;j<=cnt&&i*prime[j]<=n;j++){
            isprime[i*prime[j]]=0;
            if(i%prime[j]==0) break;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    isprime.set();
    ai(n);
    int t;
    while(cin>>t){
        cout<<isprime[t]<<endl;
    }
    return 0;
}