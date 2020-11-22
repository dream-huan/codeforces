#include<bits/stdc++.h>
using namespace std;

string a,b;
int ans,start=-1,sum;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    getline(cin,a);
    a=' '+a;
    a+=' ';
    for(int i=0;i<a.length();i++){
        a[i]=tolower(a[i]);
    }
    getline(cin,b);
    b=' '+b;
    for(int i=0;i<b.length();i++){
        b[i]=tolower(b[i]);
    }
    if(b.find(a)==-1) cout<<-1<<endl;
    else{
        int sum=0;int n=0;
		while(b.find(a,n)!=-1)
		{	
			sum++;
			n=b.find(a,n)+1;
			
		}
		cout<<sum<<" ";
		cout<<b.find(a);
    }
    return 0;
}