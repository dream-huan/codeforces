#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a[105];
        cin>>n;
        a[1]=4;
        cout<<4<<",";
        for(int i=2;i<=n;i++){
            int t1=0;
            for(int k=5;;k++){
                int t2=0;
                for(int j=1;j<i;j++) if(__gcd(k,a[j])!=1&&k%a[j]!=0&&a[j]%k!=0) t2++;
                if(t2>=i-1){
                    t1=k;
                    break;
                }      
            }
            a[i]=t1;
            cout<<a[i]<<",";
        }
        cout<<endl;
    }
    return 0;
}