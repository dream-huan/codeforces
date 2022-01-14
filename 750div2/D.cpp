/* #include<bits/stdc++.h>
using namespace std;

#define int long long

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int n,a[100005],base,index=0;
        int b[100005];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        base=abs(a[0]);
        for(int i=0;i<n;i++){
            if(base<abs(a[i])){
                base=abs(a[i]);
                index=i;
            }
        }
        int sum=0;
        for(int i=0;i<index;i++){
            if(a[i]>0) b[i]=base;
            else b[i]=-1*base;
            sum+=(a[i]*b[i]);
        }
        for(int i=index+1;i<n;i++){
            if(a[i]>0) b[i]=base;
            else b[i]=-1*base;
            sum+=(a[i]*b[i]);
        }
        b[index]=sum/a[index];
        b[index]*=-1;
        for(int i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
} */


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
        int n,a[100005];
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        if(n&1){
            for(int i=0;i<n;i++){
                if(i==n/2){
                    int f=a[0]*a[n-1];
                    if(f<0){
                        if(a[i]<0) cout<<(a[n-1]<0?-1*a[n-1]:a[n-1])<<" ";
                        else cout<<(a[n-1]<0?a[n-1]:-1*a[n-1])<<" ";
                    }else{
                        if(a[i]<0) cout<<(a[n-1]<0?a[n-1]:-1*a[n-1])<<" ";
                        else cout<<(a[n-1]<0?-1*a[n-1]:a[n-1])<<" ";
                    }
                    // cout<<a[n-1]<<" ";
                    continue;
                }
                if(i==n-1){
                    int f=a[0]*a[n-1];
                    int ans=abs(a[0]*a[i])+abs(a[n/2]*a[i]);
                    cout<<(f<0?(ans/a[i]):-1*(ans/a[i]));
                    continue;
                }
                if(i<n/2) cout<<a[n-i-1]<<" ";
                else cout<<-1*a[n-i-1]<<" ";
            }
        }else{
            for(int i=0;i<n;i++){
                if(i<n/2) cout<<a[n-i-1]<<" ";
                else cout<<-1*a[n-i-1]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}