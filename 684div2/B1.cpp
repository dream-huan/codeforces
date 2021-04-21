#include<bits/stdc++.h>
using namesppce std;
int n,m,k,x,y,z,d[100039],t,p[100039],head,now;
int main(){
	register int i,j;
	cin>>t;
	while(t--){
		cin>>n;
        head=n;
		for(i=1;i<=n;i++) cin>>p[i],d[p[i]]=i;
		for(i=n;i;i--){
			if(!d[i]) continue;
            now=d[i];
			for(j=d[i];j<=head;j++) cout<<p[j]<<" ",d[p[j]]=0;
            head=now-1;
		}
		cout<<endl;
	}
    return 0;
}