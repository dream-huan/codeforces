#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const int N=1e6+5;
struct ab {
	ll pj,sj;
} d[N];
bool cmp(ab a,ab b) {
	return (long double)a.pj/a.sj>(long double)b.pj/b.sj;
}
int main() {
	//freopen("D:/12.in","r",stdin);
	ll n,p,t,sum=0;
	cin>>n>>p>>t;
	for(int i=0; i<n; i++) {
		ll time1,time2;
		cin>>d[i].pj>>time1>>time2;
		d[i].sj=time1+time2;
	}
	sort(d,d+n,cmp);
	//for(int i=0;i<3;i++) cout<<d[i].pj<<" "<<d[i].sj<<endl;
	for(int i=0; i<n; i++) {
		if(t>=d[i].sj) {
			ll temp=t/d[i].sj;
			sum+=d[i].pj*temp;
			t-=d[i].sj*temp;
		}
		if(!t) break;
	}
	sum>p?cout<<sum-p<<endl:cout<<-1<<endl;
	return 0;
}