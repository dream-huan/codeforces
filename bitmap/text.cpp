#include<bits/stdc++.h>
using namespace std;

class Tries{
public:
    void insertStr(string s){
        Tries* node=this;
        for(int i=0;i<s.length();++i){
            if(!node->children[s[i]-'a']) node->children[s[i]-'a']=new Tries();
            node=node->children[s[i]-'a'];
        }
        node->isEnd=true;
    }
    bool checkPrefix(string s){
        Tries* node=this;
        for(int i=0;i<s.length();++i){
            node=node->children[s[i]-'a'];
            return node!=nullptr;
        }
        return node!=nullptr;
    }
    bool checkStr(string s){
        Tries* node=this;
        for(int i=0;i<s.length();++i){
            if(node!=nullptr) node=node->children[s[i]-'a'];
        }
        return node!=nullptr&&node->isEnd;
    }
private:
    vector<Tries*>children=vector<Tries*>(26);
    bool isEnd=false;
};

int main(){
    Tries* tree=new Tries();
    tree->insertStr("abewferrg");
    cout<<tree->checkPrefix("abe")<<"\n";
    cout<<tree->checkStr("ade")<<"\n";
    cout<<tree->checkStr("abewferrg")<<"\n";
    return 0;
}