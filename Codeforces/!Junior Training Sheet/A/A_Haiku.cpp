#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    string s = "aeoiu";
    int r1 = 0, r2 = 0, r3 = 0;
    rep(i, 0, s1.size())
        if (s.find(s1[i]) != -1)
            r1++;
    rep(i, 0, s2.size())
        if (s.find(s2[i]) != -1)
            r2++;
    rep(i, 0, s3.size())
        if (s.find(s3[i]) != -1)
            r3++;
    if (r1 == 5 && r2 == 7 && r3 == 5)
        cout << "YES";
    else 
        cout << "NO";    
    return 0;
}