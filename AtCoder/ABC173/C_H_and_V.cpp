#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> v(h);
    rep(i, 0, h)
        cin >> v[i];
    int tot = 0;
    rep(i, 0, h)
        rep(j, 0, w)
            if (v[i][j] == '#')
                tot++;
    int res = 0;
    for(int mask1 = 0; mask1 < (1<<h); mask1++)
    {
        int tot2 = tot;
        vector<bool> active1(h, false);
        for(int i=0; i<h; i++) if(mask1 & (1<<i))
        {
            active1[i] = true;
            rep(j, 0, w)
                if (v[i][j] == '#')
                    tot2--;
        }
        for(int mask2 = 0; mask2 < (1<<w); mask2++)
        {
            int tot3 = tot2;
            for(int i=0; i<w; i++) if(mask2 & (1<<i))
            {
                rep(j, 0, h)
                    if (v[j][i] == '#' && active1[j] == false)
                        tot3--;
            }
            if (tot3 == k)
                res++;
        }
    }
    cout << res;
    return 0;
}