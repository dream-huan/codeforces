#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool istwo(int x){
    return x&(x-1)==0?true:false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int x,ans=0;
        cin>>x;
        while(!istwo(x)){
            if(x&1) x*=3,x++;
            else x/=2;
            ans++;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}