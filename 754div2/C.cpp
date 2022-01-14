#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        int n;
        int minm=0x3f3f3f3f;
        cin>>n;
        string s;
        cin>>s;
        int left=0,right=0;
        for(int i=1;i<=s.length();i++){
            while(i<=s.length()&&s[i-1]!='a') i++;
            if(i>s.length()) break;
            if(!left) left=i;
            else if(!right) right=i;
            // cout<<left<<" "<<right<<"\n";
            if(left&&right){
                if(right-left<=2)  minm=min(minm,right-left+1);
                else if(right-left==3&&s[right-2]!=s[left])  minm=min(minm,right-left+1);
                left=right;
                right=0;
                if(minm==2) break;
            }
        }
        if(minm==0x3f3f3f3f){
            for(int i=0;i<s.length();i++){
                // cout<<s[i]<<" "<<s[i+1]<<" "<<s[i+2]<<" "<<s[i+3]<<" "<<s[i+4]<<" "<<s[i+5]<<" "<<s[i+6]<<"\n";
                if(i+6<s.length()&&s[i]==s[i+3]&&s[i+3]==s[i+6]&&s[i+6]=='a'){
                    if(s[i+5]==s[i+4]&&s[i+1]==s[i+2]&&s[i+5]!=s[i+1]) minm=min(minm,7);
                }
            if(minm!=0x3f3f3f3f) break;
            }
        }
        // if(left&&right&&right-left<=2)  minm=min(minm,right-left+1);
        minm==0x3f3f3f3f?cout<<-1<<"\n":cout<<minm<<"\n";
    }
    return 0;
}
//ww
/* 
aaaaccc
acccaaa
acacaca //worst 3
aa //best 2

abbacca

aacca
acaca


acba
 */