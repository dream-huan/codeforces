#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
       int n,m;
       cin>>n>>m;
       if(n%3==0||m%3==0) cout<<(n*m)/3<<"\n";
        else{
            int a=n%3,b=m%3;
            cout<<min(((n-a)*m)/3+(m/3+1)*a,((m-b)*n)/3+(n/3+1)*b)<<"\n";
        }
    }
    return 0;
}

/* 
*****
*****
*****
*****
5+2=7

 */