#include<bits/stdc++.h>
using namespace std;

bool para(string s){
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]!=s[n-i-1]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _;
    cin>>_;
    while(_--){
        set<char>s;
        vector<char>ans;
        int n;
        cin>>n;
        string str;
        cin>>str;
        for(char i:str) s.insert(i);
        for(auto i=s.begin();i!=s.end();i++){
            string temp="";
            for(char j:str) if(j!=*i) temp+=j;
            if(para(temp)) ans.push_back(*i);
        }
        // for(char i:ans) cout<<i<<endl;
        int minm=INT_MAX;
        for(char c:ans){
            int sum=0;
            int start=0,end=n-1;
            for(int i=0;i<n;i++){
                if(str[i]==str[n-1]){
                    start=i;
                    break;
                }
            }
            for(int i=n-1;i>=0;i--){
                if(str[0]==str[i]){
                    end=i;
                    break;
                }
            }
            string temp=str;
            if(start!=0&&str[0]==c){
                sum+=start;
                temp=str.substr(start,n-start);
            }else if(start!=0){
                sum+=(n-1-end);
                temp=str.substr(0,end+1);
            }
            int j=temp.length()-1;
            int len=temp.length();
            for(int i=0;;){
                if(i==j) break;
                if(temp[i]!=temp[j]){
                    // string temp2;
                    if(temp[i]==c){
                        // cout<<'a'<<endl;
                        // temp2=temp.substr(0,i);
                        // cout<<'b'<<endl;
                        // temp2+=temp.substr(i+1,temp.length()-i-1);
                        i++;
                    }else{
                        // cout<<'c'<<endl;
                        // temp2=temp.substr(0,temp.length()-1-i);
                        // cout<<'d'<<endl;
                        // temp2+=temp.substr(temp.length()-i,i);
                        j--;
                        len--;
                    }
                    sum++;
                    // temp=temp2;
                    // cout<<temp2<<endl;
                }else{
                    i++;
                    j--;
                }
            }
            minm=min(minm,sum);
        }
        cout<<(minm==INT_MAX?-1:minm)<<endl;
    }
    return 0;
}