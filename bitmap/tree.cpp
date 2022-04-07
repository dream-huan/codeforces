/* #include<bits/stdc++.h>
using namespace std;

#define int long long

const int N=5e5+5;
int a[N];

class Tree{
public:
    int data[N];
    int tag[N];
    int ls(int x) {return x<<1;}
    int rs(int x) {return x<<1|1;}
    void push_up(int x){
        data[x]=data[ls(x)]+data[rs(x)];
    }
    void f(int p,int l,int r,int k){
        tag[p]+=k;
        data[p]+=(k*(r-l+1));
    }
    void push_down(int p,int l,int r){
        int mid=l+r>>1;
        f(ls(p),l,mid,tag[p]);
        f(rs(p),mid+1,r,tag[p]);
        tag[p]=0;
    }
    void init(){
        memset(data,0,sizeof data);
        memset(tag,0,sizeof tag);
    }
    void build(int p,int l,int r){
        // tag[p]=0;
        if(l==r){
            data[p]=a[l];
            return;
        }
        int mid=l+r>>1;
        build(ls(p),l,mid);
        build(rs(p),mid+1,r);
        push_up(p);
    }
    void update(int nl,int nr,int l,int r,int p,int d){
        if(nl<=l&&r<=nr){
            data[p]+=(d*(r-l+1));
            tag[p]+=d;
            return;
        }
        push_down(p,l,r);//下沉更新下列节点
        int mid=l+r>>1;
        if(nl<=mid) update(nl,nr,l,mid,ls(p),d);
        if(nr>=mid+1) update(nl,nr,mid+1,r,rs(p),d);
        push_up(p);//下列节点更新完成，更新根节点
    }
    int query(int p,int l,int r,int x,int y){
        int ans=0;
        if(x<=l&&r<=y){
            return data[p];
        }
        push_down(p,l,r);//下沉更新节点，为啥要更新节点？因为我现在需要用这个数据了
        int mid=l+r>>1;
        if(mid>=x) ans+=query(ls(p),l,mid,x,y);
        if(y>=mid+1) ans+=query(rs(p),mid+1,r,x,y);
        return ans;
    }
};

signed main(){
    int a1,b,c,d,e,f,n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    Tree tree;
    tree.init();
    tree.build(1,1,n);
    while(m--)
    {
        scanf("%lld",&a1);
        switch(a1)
        {
            case 1:{
                scanf("%lld%lld%lld",&b,&c,&d);
                tree.update(b,c,1,n,1,d);
                break;
            }
            case 2:{
                scanf("%lld%lld",&e,&f);
                printf("%lld\n",tree.query(1,1,n,e,f));
                break;
            }
        }
    }
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

#define int long long

const int N=1e5+5;
int a[N];
int n,m;
int P;

class Tree{
public:
    int data[N];
    int tag[N];
    int tag2[N];
    int ls(int x){return x<<1;}
    int rs(int x){return x<<1|1;}
    void push_up(int p){
        data[p]=(data[ls(p)]+data[rs(p)])%P;
    }
    void push_down(int p,int l,int r){
        int mid=l+r>>1;
        f(ls(p),l,mid,tag[p],tag2[p]);
        f(rs(p),mid+1,r,tag[p],tag2[p]);
        tag[p]=0,tag2[p]=1;
    }
    void f(int p,int l,int r,int d,int k){
        data[p]=(data[p]*k%P+d*(r-l+1)%P)%P;
        tag2[p]=(tag2[p]*k)%P;
        tag[p]=(tag[p]*k+d)%P;
        // data[p]+=(d*(r-l+1));
        // tag[p]+=d;
    }
    void build(int p,int l,int r){
        tag2[p]=1;
        if(l==r){
            data[p]=a[l];
            return;
        }
        int mid=l+r>>1;
        build(ls(p),l,mid);
        build(rs(p),mid+1,r);
        push_up(p);
    }
    void update_add(int nl,int nr,int l,int r,int p,int d){
        // cout<<"update"<<endl;
        if(l>=nl&&r<=nr){
            data[p]=(data[p]+d*(r-l+1))%P;
            tag[p]=(tag[p]+d)%P;
            return;
        }
        push_down(p,l,r);
        int mid=l+r>>1;
        // cout<<l<<" "<<r<<" "<<mid<<endl;
        if(nl<=mid) update_add(nl,nr,l,mid,ls(p),d);
        if(nr>=mid+1) update_add(nl,nr,mid+1,r,rs(p),d);
        push_up(p);
    }
    void update_mul(int nl,int nr,int l,int r,int p,int d){
        // cout<<"update"<<endl;
        if(l>=nl&&r<=nr){
            data[p]=data[p]*d%P;
            tag2[p]=tag2[p]*d%P;
            tag[p]=tag[p]*d%P;
            return;
        }
        push_down(p,l,r);
        int mid=l+r>>1;
        // cout<<l<<" "<<r<<" "<<mid<<endl;
        if(nl<=mid) update_mul(nl,nr,l,mid,ls(p),d);
        if(nr>=mid+1) update_mul(nl,nr,mid+1,r,rs(p),d);
        push_up(p);
    }
    int query(int nl,int nr,int l,int r,int p){
        if(l>=nl&&r<=nr){
            return data[p];
        }
        push_down(p,l,r);
        int mid=l+r>>1;
        int ans=0;
        if(nl<=mid) ans+=query(nl,nr,l,mid,ls(p));
        if(nr>=mid+1) ans+=query(nl,nr,mid+1,r,rs(p));
        return ans%P;
    }
};

inline int qread(){
    int s=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0'&& ch<='9'){
        s=(s<<3)+(s<<1)+(ch^48);
        ch=getchar();
    }
    return s*f;
}


signed main(){
    n=qread(),m=qread(),P=qread();
    int options,x,y,k;
    for(int i=1;i<=n;++i) a[i]=qread();
    Tree tree;
    tree.build(1,1,n);
    while(m--){
        options=qread();
        x=qread();
        y=qread();
        if(options==1){
            k=qread();
            tree.update_mul(x,y,1,n,1,k);
        }else if(options==2){
            k=qread();
            tree.update_add(x,y,1,n,1,k);
        }else{
            printf("%lld\n",tree.query(x,y,1,n,1));
        }
    }
    return 0;
}
//