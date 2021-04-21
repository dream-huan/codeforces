#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long p,a,b,c;
        cin>>p>>a>>b>>c;
        if(p%a==0||p%b==0||p%c==0) cout<<0<<endl;
        else a=abs(p-((p+a)/a)*a),b=abs(p-((p+b)/b)*b),c=abs(p-((p+c)/c)*c),cout<<min(min(a,b),min(a,c))<<endl;
    }
    return 0;
}