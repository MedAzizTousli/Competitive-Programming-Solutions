#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int t;
    cin >> t;
    deque<int> v;
    while(t--)
    {
        int a;
        cin >> a;
        v.push_front(a);
    }
    int S = 0, D = 0;
    int i = 0;
    while(!v.empty())
    {
        int a = v.back();
        int b = v.front();
        if (a > b)
        {
            if (i % 2 == 0)
                S+=a;
            else 
                D+=a;
            v.pop_back();
        }
        else 
        {
            if (i % 2 == 0)
                S+=b;
            else 
                D+=b;
            v.pop_front();
        }
        i++;
    }
    cout << S << " " << D;    
    return 0;
}