#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,x,a[1005],odd=0,even=0,sum=0;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]%2==0?even++:odd++;
        }
        odd--;
        if(odd==-1){
            cout<<"NO"<<endl;
            continue;
        }
        if(even==0&&x%2==0){
            cout<<"NO"<<endl;
            continue;
        }else if(even==0&&x%2==1){
            cout<<"YES"<<endl;
            continue;
        }
        x--;
        if(x>even){
            if(odd>=x-even&&(x-even)%2==0){
                cout<<"YES"<<endl;
                continue;
            }
            else if(odd>=x-even+1&&(x-even)%2==1){
                cout<<"YES"<<endl;
                continue;
            }
        }else{
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}