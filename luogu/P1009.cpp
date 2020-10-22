#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int c[50500],e[50500];
string gjc(string abc,string acd){
    char a1[100005],b1[100005];
    int a[100005],b[100005],e[100005];
    for(int i=0;i<abc.length();i++){
        a1[i+1]=abc[i];
    }
    for(int i=0;i<acd.length();i++){
        b1[i+1]=acd[i];
    }
    string d="";
    a[0]=strlen(a1);
	b[0]=strlen(b1);
	for(int i=1;i<=a[0];i++) a[i]=a1[a[0]-i]-'0';
	for(int i=1;i<=b[0];i++) b[i]=b1[b[0]-i]-'0';
	for(int i=1;i<=a[0];i++){
		for(int j=1;j<=b[0];j++){
			e[i+j-1]+=a[i]*b[j];
		}
	}
	int len=a[0]+b[0];
	for(int i=1;i<len;i++){
		if(e[i]>=10){
			e[i+1]+=e[i]/10;
			e[i]%=10;
		}
	}
	for(int i=len;i>=1;i--){
		if(e[i]==0&&len!=1){
			len--;
		}else if(e[i]!=0){
			break;
		}
	}
    for(int i=len;i>=1;i--){
		d+=(e[i]+'0');
	}
    return d;
}
void gjj(string a,string b){
    if(max(a.length(),b.length())!=a.length()) swap(a,b);
    for(int i=b.length();i<a.length();i++){
        b="0"+b;
    }
    memset(c,0,sizeof(c));
    for(int i=a.length()-1;i>=0;i--){
        int i1=a[i]-'0',i2=b[i]-'0',i3=0;
        if(c[i+1]==1) i3++;
        c[i+1]=(i1+i2+i3)%10;
        c[i]=(i1+i2+i3)/10;
    }
    return ;
}
int main()
{
    //char a[100005],b[100005];
    //cin>>a>>b;
    //gjj(a,b);
    
    /*for(int i=0;i<=max(a.length(),b.length());i++){
        if(i==0&&c[0]==0) continue;
        d+=c[i]+'0';
    }*/
    
    //cout<<gjc(a,b)<<endl;
    int n;
    cin>>n;
    string ans2="0";
    for(int i=1;i<=n;i++){
        string ans="1";
        for(int j=2;j<=i;j++){
            ans=gjc(((char)(j+48)+""),ans);
        }
        gjj(ans,ans2);
        ans2="";
        for(int i=0;i<=max(ans.length(),ans2.length());i++){
            if(i==0&&c[0]==0) continue;
            ans2+=c[i]+'0';
        }
    }
    cout<<ans2<<endl;
    return 0;
}