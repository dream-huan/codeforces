#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int p,a,n,av[100],re;
//分别代表进程，已有，还需，系统可用,资源;
int allocation[100][100];
int need[100][100];
bool P[100];
vector<int>ans;

/* bool check(){
    for(int i=0;i<re;i++){
        vector<pair<int,int>>temp;
        for(int j=0;j<p;j++){
            temp.push_back(make_pair(allocation[j][i],need[j][i]));
        }
        sort(temp.begin(),temp.end(),[=](pair<int,int>f,pair<int,int>g){return f.second==g.second?f.first<g.first:f.second>g.second;});//分不同资源从大到小排序,资源相同的需要的少的排前面
        for(int j=0;j<temp.size();j++){
            cout<<temp[j].first<<" "<<temp[j].second<<endl;
        }
        for(int j=0;j<p;j++){
            int sum=av[i];
            for(int k=j+1;k<p;k++) sum+=temp[k].first;//加上能拿到的
            if(sum<temp[j].second) return false;//如果能拿到的都不能大于一个线程所需要的，会永远无法跳出循环，即死锁
        }
    }
    return true;
} */

int main(){
    cout<<"输入p的数量:";
    cin>>p;
    cout<<"\n";
    cout<<"输入资源的数量:";
    cin>>re;
    cout<<"\n";
    cout<<"请输入"<<p<<"个进程对应的Allocation"<<endl;
    for(int i=0;i<p;i++){
        cout<<"P"<<i<<":";
        for(int j=0;j<re;j++) cin>>allocation[i][j];
        cout<<"\n";
    }
    cout<<"请输入"<<p<<"个进程对应的Need"<<endl;
    for(int i=0;i<p;i++){
        cout<<"P"<<i<<":";
        for(int j=0;j<re;j++) cin>>need[i][j];
        cout<<"\n";
    }
    cout<<"请输入初始资源数:";
    for(int j=0;j<re;j++) cin>>av[j];
    cout<<"\n";
    cout<<"是否有进程提出请求？如有，输入提出的数量，如没有，输入0"<<"\n";
    int request;
    cin>>request;
    if(request){
        int r[100];
        for(int i=1;i<=request;i++){
            cout<<"请输入第"<<i<<"个请求:";
            for(int j=0;j<re;j++) cin>>r[j],av[j]-=r[j];//现有可用资源减去请求
            cout<<endl;
        }
    }
    /* if(!check()){
        cout<<"线程不安全,请重试"<<"\n";
        return 0;
    } */
    int pre=-1;
    for(int i=0;i<p;i++){
        int key=0;
        for(int j=0;j<re;j++){
            if(av[j]>=need[i][j]) key++;
        }
        if(!P[i]&&key==re){
            for(int j=0;j<re;j++){
            av[j]+=allocation[i][j];
            //可以执行，执行完毕后将线程回收。
            }
            P[i]=1;//代表已完成执行
            ans.push_back(i);
        }
        if(i==p-1){
            int k=0;
            for(int i=0;i<p;i++) k+=P[i];
            // cout<<k<<endl;
            if(k!=p) i=-1;//如果k=0代表有P[i]=0,即有进程未完成，再次尝试
            // cout<<pre<<" "<<k<<endl;
            if(pre!=-1){
                if(k==pre){
                    cout<<"线程不安全,请重试"<<"\n";
                    return 0;
                }
            }
            else pre=k;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<"P"<<ans[i];
        if(i!=ans.size()-1) cout<<",";//输出符合条件的序列
    }
    return 0;
}