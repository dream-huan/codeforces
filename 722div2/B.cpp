#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,zs=0,zero=0,fs=0,minz=INT_MAX;
        cin>>n;
        vector<int>a(n);
        vector<int>b;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0) zs++,minz=min(minz,a[i]);
            else if(a[i]==0) zero++,b.push_back(a[i]);
            else fs++,b.push_back(a[i]);
        }
        if(zero>=2||zs==0) cout<<fs+zero<<endl;
        else{//一定满足zero<=1&&zs>=1
            int temp=0;
            b.push_back(minz);
            sort(b.begin(),b.end());
            for(int i=1;i<b.size();i++){
                if(abs(b[i]-b[i-1])>=minz) temp++;
            }
            if(zero>0) fs++;//0一定会考虑
            if(temp==b.size()-1) cout<<fs+1<<endl;//满足条件则考虑该正数，否则不考虑
            else cout<<fs<<endl;
        }
    }
    return 0;
}