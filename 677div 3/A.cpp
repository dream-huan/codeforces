#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        int d;
        if(x.length()==1) d=1;
        if(x.length()==2) d=3;
        if(x.length()==3) d=6;
        if(x.length()==4) d=10;
        cout<<(x[0]-'1')*10+d<<endl;
    }
    return 0;
}