#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
       int n,a[N];
       int b[N],c[N],n1=0,n2=0;
       int flag=0;
       cin>>n;
       for(int i=0;i<n;i++) cin>>a[i];
       string s;
       cin>>s;
       for(int i=0;i<s.length();i++) s[i]=='B'?b[n1++]=a[i]:c[n2++]=a[i];
       sort(b,b+n1);
       sort(c,c+n2);
       for(int i=0;i<n1;i++){
           if(b[i]<i+1) flag=1;
       }
       for(int i=n1;i<n2+n1;i++){
           if(c[i-n1]>i+1) flag=1;
       }
       cout<<(flag==0?"YES":"NO")<<"\n";
    }
    return 0;
}


/* 

blue:1 4 7
red:2 3 1
1 4 7 2 3 1
blue<i
red>i
1 4 7 1 2 3

 */
