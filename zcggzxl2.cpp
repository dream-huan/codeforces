#include<bits/stdc++.h>
using namespace std;

int n;
int a[100005],b[100005],c[100005];
map<int,int>mp;

int lcs(){
    int temp=0;
    for(int i=1;i<=n;i++){
        if(mp[b[i]]>c[temp]) c[++temp]=mp[b[i]];
        else{
            c[lower_bound(c,c+temp,mp[b[i]])-c]=mp[b[i]];
        }
    }
    return temp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i],mp[a[i]]=i;
    for(int i=1;i<=n;i++) cin>>b[i];
    cout<<lcs()<<endl;
    return 0;
}