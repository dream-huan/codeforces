#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>ans;
        deque<int>q;
        int a1,a2,t,g;
        for(int i=0;i<nums.size();++i) q.emplace_back(nums[i]);
        while(!q.empty()){
            a1=q[0];
            q.pop_front();
            a2=q[0];
            g=__gcd(a1,a2);
            if(g>1){
                t=1ll*a1*a2/g;
                q.pop_front();
                q.emplace_front(t);
            }else{
                ans.emplace_back(a1);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    Solution *a=new Solution();
    int n;
    vector<int>v(n);
    cin>>n;
    for(int i=0;i<n;++i) cin>>v[i];
    vector<int>ans;
    ans=a->replaceNonCoprimes(v);
    for(int i=0;i<ans.size();++i) cout<<ans[i]<<" "; 
    return 0;
}