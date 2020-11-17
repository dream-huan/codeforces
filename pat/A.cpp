#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
inline ll ss(ll x)
{
    if (x == 1)
        return false;
    else if (x == 2 || x == 3)
        return false;
    else if (x % 6 != 1 && x % 6 != 5)
        return false;
    else
    {
        for (ll i = 5; i * i <= x; i += 6)
        {
            if (x % i == 0 || x % (i + 2) == 0)
                return false;
        }
    }
    return true;
}
int main()
{
    ll n;
    cin >> n;
    if (ss(n))
    {
        cout << "YES" << endl;
        n-=6;
        for (ll i = n;i>=1; i-=6)
        {
            if (ss(i))
            {
                cout << i << endl;
                return 0;
            }
        }
        n+=12;
        for (ll i = n;; i+=6)
        {
            if (ss(i))
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    else
        cout << "NO" << endl;
    for (ll i = n+1;; i++)
    {
        if (ss(i))
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}