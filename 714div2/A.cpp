#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int sum=((n+1)/2)-1;
        if(k>sum) cout<<-1<<endl;
        else{
            int start=1,end=n;
            for(int i=0;i<k;i++){
                cout<<start<<" "<<end<<" ";
                start++;
                end--;
            }
            for(int i=start;i<=end;i++) cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}