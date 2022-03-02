#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int b=1;
    // auto& a=b;
    auto t="123";
    auto&& a=t;
    vector<string>v;
    v.push_back(move(a));
    cout<<a<<endl;
    cout<<v[0]<<endl;
    return 0;
}