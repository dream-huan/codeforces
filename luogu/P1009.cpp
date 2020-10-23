#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int c[50500],e[50500];
string gjc(string s,string x){
    string d;
    int a[2010],b[2010],c[40100];
	int i,j;
	memset(a,0,sizeof(a)); 
	memset(b,0,sizeof(b)); 
	memset(c,0,sizeof(c)); 
	a[0]=s.length();
	for(i=1;i<=a[0];i++)
	{
		a[i]=s[a[0]-i]-'0';	
	}
	b[0]=x.length();
	for(i=1;i<=b[0];i++)
	{
		b[i]=x[b[0]-i]-'0';	
	}
	c[0]=a[0]+b[0]-1;
	for(j=1;j<=b[0];j++)
	{
		for(i=1;i<=a[0];i++)
		{
			c[i+j-1]+=a[i]*b[j];
			c[i+j]+=c[i+j-1]/10;
			c[i+j-1]%=10;
            //进位处理
		}
	}
	if(c[c[0]+1]>=1) c[0]++;
	while(c[c[0]]==0&&c[0]>1) --c[0];
	for(i=c[0];i>=1;i--) d+=(c[i]+'0');
    return d;
}
string gjj(string a,string b){
    string d="";
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
    for(int i=0;i<=max(a.length(),b.length());i++){
        if(i==0&&c[0]==0) continue;
        d+=c[i]+'0';
    }
    return d;
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
    string ans="0";
    for(int i=1;i<=n;i++) {
        string ans2="1";
        for(int j=2;j<=i;j++) {
            string temp="";
            if(j>=10) temp+=((j/10)+'0');
            temp+=(j%10+'0');
            ans2=gjc(ans2,temp);
        }
        ans=gjj(ans,ans2);
    }
    cout<<ans<<endl;
    return 0;
}