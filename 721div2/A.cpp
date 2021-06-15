#include<bits/stdc++.h>
using namespace std;

int ans[31]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<31;i++){
            if(n<ans[i]){
                cout<<ans[i-1]-1<<endl;
                break;
            }
        }
    }
    return 0;
}