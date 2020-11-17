#include<algorithm>
#include<stdio.h>
using namespace std;

int main(){
    int n=8,a[8];
    for(int i=0;i<n;i++) scanf("%d",a);
    sort(a,a+n);
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    for(int i=n-1;i>=0;i--) printf("%d ",a[i]);
    return 0;
}