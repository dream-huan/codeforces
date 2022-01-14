#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("5.in","w",stdout);
    srand(time(NULL));
    cout<<200000<<"\n";
    for(int i=0;i<200000;i++){
        cout<<(rand()%2000000000)+(-1000000000)<<" ";
    }
    return 0;
}