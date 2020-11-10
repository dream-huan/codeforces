#include<bits/stdc++.h>
using namespace std;

int n,a[10005];
vector<int>d;

int lcs(){
    d.push_back(a[0]);
    for(int i=0;i<n;i++){
        if(a[i]>d[d.size()-1]) d.push_back(a[i]);
        else{
            d[lower_bound(d.begin(),d.end(),a[i])-d.begin()]=a[i];
        }
    }
    return d.size();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int sum=1;
    int temp=0;
    while(cin>>a[temp++]) if(a[temp-2]>a[temp-1]) sum++;
    n=temp-1;
    cout<<lcs()<<endl<<sum<<endl;
    return 0;
}