#include<bits/stdc++.h>
using namespace std;

void quicksort(vector<int>& nums,int l,int r){
    //二分
    int mid=nums[l+(r-l)/2];
    int i=l,j=r;
    do{
        while(nums[i]<mid) i++;
        while(nums[j]>mid) j--;
        if(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }while(i<=j);
    if(l<j) quicksort(nums,l,j);
    if(i<r) quicksort(nums,i,r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int>nums(100005);
    for(int i=1;i<=n;i++) cin>>nums[i];
    quicksort(nums,1,n);
    for(int i=1;i<=n;i++) cout<<nums[i]<<" ";
    return 0;
}