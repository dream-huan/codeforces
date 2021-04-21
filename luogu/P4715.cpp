#include<bits/stdc++.h>
using namespace std;

struct node{
    int data,index;
}a[130];

bool cmp(node a,node b){
    return a.data<b.data;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    n=pow(2,n);
    for(int i=0;i<n;i++) cin>>a[i].data,a[i].index=i;
    sort(a,a+(n>>1),cmp);
    sort(a+(n>>1)+1,a+n,cmp);
    cout<<(a[(n>>1)-1].data>a[n-1].data?a[n-1].index+1:a[(n>>1)-1].index+1)<<endl;
    return 0;
}
