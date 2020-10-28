#include<bits/stdc++.h>
using namespace std;

bool ss(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a[105][105];
        cin>>n;
        for(int i=0;i<n;i++) for(int j=0;j<n;j++) a[i][j]=1;
        if(n&1){
            int temp;
            for(int i=n-1;i<=100000;i++){
                if(ss(i)&&!ss(i-(n-1))){
                    temp=i-(n-1);
                    break;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j) a[i][j]=temp;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
                cout<<endl;
            }
        }else{
            int temp;
            for(int i=4;i<=100000;i++){
                if(!ss(i)&&ss(n-1+i)){
                    temp=i;
                    break;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j) a[i][j]=temp;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
                cout<<endl;
            }
        }
    }
    return 0;
}