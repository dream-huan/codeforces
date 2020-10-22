#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string gjc(string a,string b){

}
string gjj(string a,string b){
    string c="";
    if(max(a.length(),b.length())!=a.length()) swap(a,b);
    for(int i=b.length();i<a.length();i++){
        b='0'+b;
    }
    for(int i=0;i<a.length();i++) c='0'+c;
    for(int i=a.length()-1;i>=0;i--){
        int i1=a[i]-'0',i2=b[i]-'0',i3=0;
        if(c[i]=='1') i3=1;
        if(i3+i1+i2>=10) c[i-1]='1';
        i3+=((i1+i2)%10);
        c[i]=i3+'0';
    }
    return c;
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<gjj(a,b)<<endl;
    //int n;
    //cin>>n;
    /*for(int i=1;i<=n;i++){

    }*/
    return 0;
}