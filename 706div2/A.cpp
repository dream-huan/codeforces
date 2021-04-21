    #include<bits/stdc++.h>
    using namespace std;

    bool hw(string s,int k){
        for(int i=0;i<k;i++){
            if(s[i]!=s[s.length()-i-1]) return false;
        }
        return true;
    }

    int main(){
        int t;
        cin>>t;
        while(t--){
            int n,k;
            string s;
            cin>>n>>k>>s;
            if(!k){
                cout<<"YES"<<endl;
                continue;
            }
            int middle=n&1?n/2:(n-1)/2;
            if(hw(s,k)&&k<=middle) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        return 0;
    } 