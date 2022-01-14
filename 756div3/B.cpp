#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int a,b;
        cin>>a>>b;
        cout<<min({(a+b)/4,a,b})<<"\n";
    }
    return 0;
}


/* 
9 9
PlanA
3 1
3 1
3 7
Plan B
1 3
1 3
1 1

4

 */