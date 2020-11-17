/*
 * @Author: dream 
 * @Date: 2020-10-23 08:04:58 
 * @Last Modified by:   dream 
 * @Last Modified time: 2020-10-23 08:04:58 
 */

#include<bits/stdc++.h>
using namespace std;
int c[50050],k=0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin>>a>>b;
    for(int i=a.length()-1;i>=0;i--)
    {
        for(int j=b.length()-1;j>=0;j--)
        {
            c[(a.length()-1-i)+(b.length()-1-j)]+=(a[i]-48)*(b[j]-48);
        }
    }
    for(int i=0;i<=a.length()+b.length();i++)
        if(i>=1) c[i]+=c[i-1]/10,c[i-1]%=10;
    
    int temp=-1;
    for(int i=a.length()+b.length();i>=0;i--){
        if(c[i]==0&&temp==-1) continue;
        if(c[i]!=0) temp=1;
        cout<<c[i];
    }
        return 0;
}