#include<bits/stdc++.h>
using namespace std;

int n=1,a[100005],c[100005],d[100005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(cin>>a[n]) n++;
    n--;
    int temp=1,temp2=1;
    c[1]=d[1]=a[1];
    for(int i=2;i<=n;i++){
        if(a[i]<=c[temp]) c[++temp]=a[i];
        else c[upper_bound(c+1,c+temp+1,a[i],greater<int>())-c]=a[i];
        if(a[i]>d[temp2]) d[++temp2]=a[i];
        else d[lower_bound(d+1,d+temp2+1,a[i])-d]=a[i];
    }
    cout<<temp<<endl;
    cout<<temp2<<endl;
    return 0;
}