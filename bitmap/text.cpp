/* #include<bits/stdc++.h>
using namespace std;

void quicksort(vector<int>& v,int l,int r){
    int i=l,j=r;
    int mid=v[l+((r-l)>>1)];
    do{
        while(v[i]<mid) ++i;
        while(v[j]>mid) --j;
        if(i<=j){
            swap(v[i],v[j]);
            ++i;
            --j;
        }
    }while(i<=j);
    cout<<l<<" "<<r<<"\n";
    for(const auto& i:v) cout<<i<<" ";
    cout<<"\n";
    if(i<r) quicksort(v,i,r);
    if(j>l) quicksort(v,l,j);
}

void merge(vector<int>& v,int l,int mid,int r){
    int n=r-l+1;
    int i=l,j=mid+1;
    vector<int>temp(n);
    int index=0;
    while(i<=mid&&j<=r) temp[index++]=v[i]>v[j]?v[j++]:v[i++];
    while(i<=mid) temp[index++]=v[i++];
    while(j<=r) temp[index++]=v[j++];
    for(i=0;i<n;++i) v[l+i]=temp[i];
}

void mergesort(vector<int>& v,int l,int r){
    if(l==r) return;
    int mid=l+((r-l)>>1);
    mergesort(v,l,mid);
    mergesort(v,mid+1,r);
    merge(v,l,mid,r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i) cin>>v[i];
    quicksort(v,0,n-1);
    // mergesort(v,0,n-1);
    // for(const auto& i:v) cout<<i<<" ";
    return 0;
} */
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a,b;
    cin>>a>>b;
    if(a.length()<b.length()) swap(a,b);
    a='0'+a;
    int i=a.length()-1,j=b.length()-1;
    while(i>=0&&j>=0){
        int num1=a[i]>='a'&&a[i]<='z'?a[i]-'a'+10:a[i]-'0',num2=b[j]>='a'&&b[j]<='z'?b[j]-'a'+10:b[j]-'0';
        num1+=num2;
        int jw=0;
        if(num1>=36) jw=1,num1-=36;
        if(jw) num1+=36;
        else a[i]=num1>=10?num1-10+'a':num1+'0';
        int index=i-1;
        while(num1>=36){
            num2=a[index]>='a'&&a[index]<='z'?a[index]-'a'+10:a[index]-'0';
            num2+=1;
            num1-=36;
            a[index+1]=num1>=10?num1-10+'a':num1+'0';
            --index;
            num1=num2;
        }
        if(jw) a[index+1]=num1>=10?num1-10+'a':num1+'0';
        --i;
        --j;
    }
    if(a[0]=='0') cout<<a.substr(1,a.length()-1)<<endl;
    else cout<<a<<endl;
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int val){
        this->val=val;
    }
};

ListNode* head;
int n;

void input(){
    cin>>n;
    if(n>0) {
        int val;
        cin>>val;
        head=new ListNode(val);
    }else return;
    ListNode* last=head;
    for(int i=1;i<n;++i){
        int val;
        cin>>val;
        ListNode* temp=new ListNode(val);
        last->next=temp;
        last=temp;
    }
}

ListNode* a=new ListNode(-1);
ListNode* b=new ListNode(-1);

void divideList(){
    ListNode* headA=a;
    ListNode* headB=b;
    ListNode* Node=head;
    int x=1;
    while(Node){
        // cout<<Node->val<<endl;
        if(x){
            headA->next=Node;
            headA=Node;
        }else{
            headB->next=Node;
            headB=Node;
        }
        x^=1;
        Node=Node->next;
    }
    headA->next=nullptr;
    headB->next=nullptr;
    a=a->next;
    b=b->next;
    // while(a) cout<<a->val<<" ",a=a->next;
    // cout<<endl;
    // while(b) cout<<b->val<<" ",b=b->next;
    // cout<<endl;
}

void reBList(){
    ListNode* ahead=nullptr;
    if(!b) return;
    ListNode* left=b;
    if(!b->next) return;
    ListNode* right=b->next;
    if(!b->next->next){
        right->next=left;
        left->next=nullptr;
        b=right;
        return;
    }
    ListNode* bNext=b->next->next;
    while(right!=nullptr){
        right->next=left;
        left->next=ahead;
        ahead=left;
        left=right;
        right=bNext;
        if(right) bNext=bNext->next;
        else break;
    }
    b=left;
    // while(b) cout<<b->val<<" ",b=b->next;
    // cout<<endl;
}

void connectlist(){
    ListNode* nHead=new ListNode(-1);
    ListNode* last=nHead;
    ListNode* Node;
    ListNode* aHead=a;
    ListNode* bHead=b;
    while(aHead&&bHead){
        if(aHead->val>bHead->val){
            Node=bHead;
            last->next=Node;
            last=Node;
            bHead=bHead->next;
        }else{
            Node=aHead;
            last->next=Node;
            last=Node;
            aHead=aHead->next;
        }
    }
    while(aHead){
        Node=aHead;
        last->next=Node;
        last=Node;
        aHead=aHead->next;
    }
    while(bHead){
        Node=bHead;
        last->next=Node;
        last=Node;
        bHead=bHead->next;
    }
    head=nHead->next;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    input();
    divideList();
    reBList();
    connectlist();
    while(head) cout<<head->val<<" ",head=head->next;
    cout<<endl;
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

stack<int>a;
stack<int>b;
int n;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int temp;
    for(int i=0;i<n;++i){
        cin>>temp;
        a.push(temp);
    }
    int minm=INT_MAX;
    int k=0;
    while(!a.empty()){
        temp=a.top();
        a.pop();
        if(temp<minm){
            minm=temp;
            k=0;
        }
        if(temp==minm) ++k;
        b.push(temp);
        // cout<<n<<k<<endl;
        if(a.empty()){
            for(int i=0;i<n;++i){
                if(minm!=b.top()) a.push(b.top());
                b.pop();
            }
            n-=k;
            while(k--) b.push(minm);
            minm=INT_MAX;
        }
    }
    while(!b.empty()) a.push(b.top()),b.pop();
    while(!a.empty()) cout<<a.top()<<" ",a.pop();
    cout<<endl;
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i) cin>>v[i];
    vector<int>f(n,0);
    vector<int>ans;
    int maxm=-1;
    for(int i=0;i<n;++i){
        if(v[i]>maxm) f[i]+=1;
        maxm=max(maxm,v[i]);
    }
    int minm=INT_MAX;
    for(int i=n-1;i>=0;--i){
        if(v[i]<minm) f[i]+=1;
        minm=min(minm,v[i]);
    }
    for(int i=0;i<n;++i) if(f[i]==2) ans.push_back(i);
    for(const auto& i:ans) cout<<i<<" ";
    cout<<endl;
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int n,m;
const int N=5e3+5;
const int mod=80112002;
vector<int>tu[N];
queue<int>q;
int in[N],out[N];
int num[N]; */

/* inline int qread(){
    char c=getchar();
    int f=1;
    int ans=0;
    if(c=='-') f=-1;
    else ans=(ans<<3)+(ans<<1)+(c^48);
    while(1){
        c=getchar();
        if(c>='0'&&c<='9') ans=(ans<<3)+(ans<<1)+(c^48);
        else break;
    }
    return ans*f;
} */

/* inline int qread(){
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

int main(){
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    n=qread(),m=qread();
    int x,y;
    int len=n;
    for(int i=0;i<m;++i){
        x=qread();
        y=qread();
        ++in[y],++out[x];
        tu[x].push_back(y);
    }
    for(int i=1;i<=n;++i){
        if(!in[i]){
            q.push(i);
            --len;
            num[i]=1;
        }
    }
    while(!q.empty()){
        int t=q.front();
        q.pop();
        for(int i=0;i<tu[t].size();++i){
            num[tu[t][i]]=(num[tu[t][i]]+num[t])%mod;
            --in[tu[t][i]];
            if(in[tu[t][i]]==0) q.push(tu[t][i]),--len;
        }
    }
    if(len!=0){
        printf("false\n");
        return 0;
    }
    int ans=0;
    for(int i=1;i<=n;++i) if(!out[i]) ans=(ans+num[i])%mod;
    printf("%d\n",ans);
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

struct Node {
    int val,key,times;
    Node(int val,int key,int times){
        this->val=val;
        this->key=key;
        this->times=times;
    }
};
class LFUCache {
public:
    LFUCache(int capacity) {
        this->capacity=capacity;
    }

    int get(int key) {
        if(capacity==0) return -1;
        auto iter=key_table.find(key);
        if(iter==key_table.end()) return -1;
        auto node=iter->second;
        int val=node->val,times=node->times;
        times_table[times].erase(node);
        if(times_table[times].size()==0){
            times_table.erase(times);
            if(minmnum==times) minmnum+=1;
        }
        times_table[times+1].push_front(Node(key,val,times+1));
        key_table[key]=times_table[times+1].begin();
        return val;
    }

    void put(int key, int value) {
        if(capacity==0) return;
        auto iter=key_table.find(key);
        if(iter!=key_table.end()){
            int times=iter->second->times;
            key_table[key]=times_table[times+1].begin();
            if(times_table[times].size()==0){
                times_table.erase(minmnum);
                if(minmnum==times) minmnum+=1;
            }
            times_table[times+1].push_front(Node(value,key,times+1));
            times_table[times].erase(iter->second);
        }else{
            if(capacity==key_table.size()){
                Node a=times_table[minmnum].back();
                times_table[minmnum].pop_back();
                key_table.erase(a.key);
                if(times_table[minmnum].size()==0) times_table.erase(minmnum);
            }
            times_table[1].push_front(Node(value,key,1));
            key_table[key]=times_table[1].begin();
            minmnum=1;
        }
    }
private:
    unordered_map<int,list<Node>>times_table;
    unordered_map<int,list<Node>::iterator>key_table;
    int capacity;
    int minmnum=0;
};

int main(){
    return 0;
} */

/* #include <bits/stdc++.h>
using namespace std;

int w[5];

void solve()
{
    for (int i = 0; i < 5; i++)
        cin >> w[i];
    sort(w, w + 5);
    for (int i = 2; i < 5; i++)
        w[i] -= w[0];
    int l = 0, r = w[1]; // w[1:4] 的最小值 的最大值 的范围
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int d = w[1] - mid;
        for (int i = 2; i < 5; i++)
        {
            if (w[i] < mid)
                d -= mid - w[i];
        }
        if (d < 0)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << w[0] + l - 1 << "\n";
}

void mysolve()
{
    for (int i = 0; i < 5; ++i)
        cin >> w[i];
    sort(w, w + 5);
    for (int i = 2; i < 5; ++i)
        w[i] -= w[0];
    int l = 0, r = w[1];
    while (l <= r)
    {
        int mid = l + ((r - l) >> 1);
        int d = w[1] - mid;
        for (int i = 2; i < 5; ++i)
        {
            if (w[i] < mid)
                d -= mid - w[i];
        }
        if (d < 0)
            r = mid - 1;
        else
            l = mid + 1;
    }
    cout << l << "\n";
}

int main()
{
    solve();
    mysolve();
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int __lowbit(int x){
    return x&(~x+1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x=100;//64+32+4
    cout<<__lowbit(x)<<endl;
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;
#define int long long

const int mod=80112002;
const int N=5e3+5;
const int M=5e5+5;
int n,m;
int in[N],out[N];
int res[N];
vector<vector<int>>children(N);
queue<int>q;

inline int qread(){
    int ans=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        ans=(ans<<3)+(ans<<1)+(ch^48);
        ch=getchar();
    }
    return ans*f;
}


signed main(){
    n=qread();
    m=qread();
    int t1,t2;
    for(int i=0;i<m;++i){
        t1=qread();
        t2=qread();
        ++in[t2],++out[t1];
        children[t1].push_back(t2);
    }
    for(int i=1;i<=n;++i){
        if(!in[i]) q.push(i),res[i]=1;
    }
    while(!q.empty()){
        int t=q.front();
        q.pop();
        for(int i=0;i<children[t].size();++i){
            --in[children[t][i]];
            res[children[t][i]]+=res[t];
            if(!in[children[t][i]]) q.push(children[t][i]);
        }
    }
    long long ans=0;
    for(int i=1;i<=n;++i) if(!out[i]) ans=(ans+res[i])%mod;
    printf("%d\n",ans);
    return 0;
} */

//树状数组

#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=5e5+5;
int a[N];
int n,m;

inline int lowbit(int x){
    return x&(~x+1);
}

class BitTree{
public:
    int data[N];
    void add(int x,int d){
        a[x]+=d;
        while(x<=n){
            data[x]+=d;
            x+=lowbit(x);
        }
    }
    int getsum(int x){
        int ans=0;
        while(x){
            ans+=data[x];
            x-=lowbit(x);
        }
        return ans;
    }
};

inline int qread(){
    int ans=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
        ans=(ans<<3)+(ans<<1)+(ch^48);
        ch=getchar();
    }
    return ans*f;
}

BitTree tree;
BitTree tree2;


void init(){
    /* for(int i=1;i<=n;++i){
        int x=i;
        while(x<=n){
            tree[x]+=a[i];
            x+=lowbit(x);
        }
    } */
    for(int i=1;i<=n;i++)
    {
        int nxt=i+lowbit(i),xx=a[i]-a[i-1];
        tree.data[i]+=xx;if(nxt<=n)tree.data[nxt]+=tree.data[i];
    }////
    for(int i=1;i<=n;i++)
    {
        int nxt=i+lowbit(i),xx=a[i]-a[i-1];
        tree2.data[i]+=(xx*(i));
        if(nxt<=n) tree2.data[nxt]+=tree2.data[i];
    }
    // for(int i=1;i<=n;++i) cout<<tree[i]<<" ";
    // cout<<"\n";
}

signed main(){
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    n=qread();
    m=qread();
    for(int i=1;i<=n;++i){
        a[i]=qread();
    }
    init();
    int options,x,y,k;
    for(int i=0;i<m;++i){
        options=qread();
        if(options==1){
            x=qread();
            y=qread();
            k=qread();
            tree.add(x,k);
            tree.add(y+1,-k);
            tree2.add(x,k*x);
            tree2.add(y+1,(y+1)*(-k));
        }else{
            // cout<<getsum(y)-getsum(x-1)<<"\n";
            x=qread();
            y=qread();
            printf("%lld\n",(y+1)*tree.getsum(y)-tree2.getsum(y)-x*tree.getsum(x-1)+tree2.getsum(x-1));
        }
    }
    return 0;
}

//