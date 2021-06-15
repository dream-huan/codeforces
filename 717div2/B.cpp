#include<bits/stdc++.h>
using namespace std;

int two[31];

void solve(int n){
    int x=0;
    while(n){
        if(n&1) two[x]++;
        // cout<<n<<" "<<x<<" "<<two[x]<<endl;
        n>>=1;
        x++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        int a[2005];
        int temp;
        memset(two,0,sizeof(two));
        cin>>n;
        if(n==2){
            int l,r;
            for(int i=0;i<2;i++){
                cin>>temp;
                if(i&1) r=temp;
                else l=temp;
            }
            if(l!=r) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            cin>>a[i];
            solve(a[i]);
        }
        bool b=1;
        int left=-1;
        for(int i=0;i<31;i++){
            // cout<<two[i]<<" ";
            if(two[i]==0) continue;
            if(left==-1) left=two[i];
            else{
                if(two[i]!=left){
                    b=0;
                    break;
                }
            }
        }
        if(b){
            for(int i=0;i<31;i++){
                if(two[i]&1){
                    int ans=0,base=1;
                    for(int j=0;j<31;j++){
                        if(two[j]!=0) ans+=base;
                        base*=2;
                    }
                    int res=0,cnt=0;
                    for(int j=0;j<n;j++){
                        res^=a[j];
                        if(res==ans){
                            cnt++;
                            res=0;
                        }
                    }
                    if(cnt<3) b=0;
                    break;
                }
            }
        }
        // cout<<endl;
        if(b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}