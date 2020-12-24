#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,t1=0,t2=0;
        cin>>n;
        char a[1005],b[1005];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++){
            if((int)a[i]>(int)b[i]) t1++;
            else if((int)a[i]==(int)b[i]) 1;
            else t2++;
        }
        if(t1>t2) cout<<"RED"<<endl;
        else if(t1<t2) cout<<"BLUE"<<endl;
        else cout<<"EQUAL"<<endl;
    }
    return 0;
}