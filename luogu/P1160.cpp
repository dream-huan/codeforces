#include<bits/stdc++.h>
using namespace std;

struct List{
    int data;
    class List *next;
};

int n,m;
List *head,*p,*t,*pre;

void init(int data){
    head=new List;
    head->data=data;
    head->next=nullptr;
}

void insert(int data,int index,int direction){
    p=new List;
    t=new List;
    pre=new List;
    p->data=data;
    //if(!direction) index--;
    for(t=head;t->next!=nullptr;t=t->next){
        if(index==t->data){
            break;
        }
        pre=t;
    }
    if(t==head&&!direction){
        p->next=t;
        p=head;
        return;
    }
    if(!direction){
        pre->next=p;
        p->next=t;
    }else{
        p->next=t->next;
        t->next=p;
    }
}

void del(int index){

}

void ergodic(){
    p=new List;
    for(p=head;p->next!=nullptr;p=p->next){
        cout<<p->data<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    init(1);
    for(int i=2;i<=n;i++){
        int index,direction;
        cin>>index>>direction;
        insert(i,index,direction);
    }
    /*cin>>m;
    for(int i=0;i<m;i++){
        int index;
        cin>>index;
        del(index);
    }*/
    ergodic();
    delete(head);
    delete(p);
    delete(t);
    delete(pre);
    return 0;
}