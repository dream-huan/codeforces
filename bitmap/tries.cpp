#include <bits/stdc++.h>
using namespace std;

class Tries
{
public:
    Tries()
    {
    }

    void insert(string s)
    {
        Tries *node = this;
        for (const auto &i : s)
        {
            if (!node->children[i - 'a'])
                node->children[i - 'a'] = new Tries();
            node = node->children[i - 'a'];
        }
        node->isEnd = true;
    }

    bool searchprefix(string prefix)
    {
        return search(prefix)!=nullptr;
    }

    bool searchwith(string s){
        Tries* node=search(s);
        return node!=nullptr&&node->isEnd;
    }

private:
    vector<Tries *> children = vector<Tries *>(26, 0);
    bool isEnd = false;
    Tries *search(string prefix)
    {
        Tries *node = this;
        for (const auto &i : prefix)
        {
            if (!node->children[i - 'a'])
                return nullptr;
            node = node->children[i - 'a'];
        }
        return node;
    }
};

int main(){
    Tries* a=new Tries();
    a->insert("apple");
    cout<<a->searchprefix("app")<<endl;
    cout<<a->searchprefix("apc")<<endl;
    cout<<a->searchwith("apple")<<endl;
    cout<<a->searchwith("appl")<<endl;
    cout<<a->searchwith("applea")<<endl;
    return 0;
}