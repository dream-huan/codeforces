#include<bits/stdc++.h>
using namespace std;

int n,k;
int dp[10005][10005];
vector<pair<int,int>>a;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    int temp1,temp2;
    for(int i=0;i<k;i++) {
        cin>>temp1>>temp2;
        a.push_back(make_pair(temp1,temp2));
    }
    for(int i=0;i<a.size();i++){
        
    }
    return 0;
}