#include<bits/stdc++.h>
using namespace std;

int ncr(int n,int r){
    int result=1;
    r=min(n-r,r);
    for(int i=0;i<r;i++){
        result*=(n-i);
        result/=(i+1);
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        cout<<ncr(10,2)<<endl;
    }
    return 0;
}