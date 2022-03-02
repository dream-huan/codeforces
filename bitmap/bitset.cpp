#include<bits/stdc++.h>
using namespace std;

const int N=20000000;
unsigned int a[1+N/32]={0};

void sset(int x){
    a[x>>5]|=(1<<(x&0x1f));
}
//
void resset(int x){
    a[x>>5]&=~(1<<(x&0x1f));
}
//
bool getState(int x){
    return a[x>>5]&(1<<(x&0x1f))&&1;
}
//
int main(){
    for(int i=0;i<100;i++) sset(i);
    for(int i=0;i<50;i++) resset(i);
    for(int i=0;i<100;i++) cout<<getState(i)<<endl;
    return 0;
}
//buaixanhuawww