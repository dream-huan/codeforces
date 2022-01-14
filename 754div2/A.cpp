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
        int a,b,c;
        cin>>a>>b>>c;
        if(a+c>=2*b){
            int i=(a+c-2*b)/3;
            int j=(ceil)((a+c-2*b)*1.0/3);
            cout<<min(abs(a+c-i-2*(b+i)),abs(a+c-j-2*(b+j)))<<"\n";
        }
        else{
            int i=(2*b-a-c)/3;
            int j=(ceil)((2*b-a-c)*1.0/3);
            cout<<min(abs(a+c+i-2*(b-i)),abs(a+c+j-2*(b-j)))<<"\n";
        }
    }
    return 0;
}

/* 
a+c-2b=0
a+c=2b
a+c-i=2(b+i)
a+c-i=2b+2i
a+c=2b+3i
3i=a+c-2b

a+c+i=2(b-i)
a+c+i=2b-2i
a+c=2b-3i
3i=2b-a-c

27+36 49*2
63 98
27+36+8 41
71 82
27+36+11 38
74 76
27+36+12 37
75 74

98-63=35/3=11

2 4
1 2 1

 */

