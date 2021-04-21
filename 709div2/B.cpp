#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a[100005];
        set<int>b;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0) b.insert(a[i]-a[i-1]);
        }
        if(b.size()>2) cout<<-1<<endl;
        else{
            int a1=*b.begin(),b1=*b.end();
            int c1=a1,c2=b1;
            int m1=c1-b1,m2=c2-a1;
            if(m1>c1&&c1>=0&&m2>c1&&c2>=0){
                cout<<max(m1,m2)<<" ";
                
            }
        }
    }
    return 0;
}