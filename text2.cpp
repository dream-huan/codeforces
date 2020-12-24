#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k,a[100005],b[105],maxm=-1,maxs,c[105],temp=0;
        memset(b,0,sizeof(b));
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i],b[a[i]]++;
        for(int i=0;i<=100;i++) {
            if(max(maxm,b[i])==b[i]){
                maxm=b[i];
                maxs=i;
            }
        }
        maxm=0;
        int t1=0;
        for(int i=0;i<n;i++){
        	if(a[i]!=maxs) t1++;
        	else{
        		if(t1>0) c[++temp]=t1;
        		t1=0;
			}
		}
		if(t1>0) c[++temp]=t1;
		for(int i=1;i<=temp;i++) maxm+=(ceil)(c[i]*1.0/k*1.0);
        cout<<maxm<<endl;
    }
    return 0;
}