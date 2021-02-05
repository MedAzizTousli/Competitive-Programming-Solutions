#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    map<string, bool> mp;
    if (s1[1] == '<')
        s1 = string(1, s1[2]) + ">" + string(1, s1[0]);
    if (s2[1] == '<')
        s2 = string(1, s2[2]) + ">" + string(1, s2[0]);
    if (s3[1] == '<')
        s3 = string(1, s3[2]) + ">" + string(1, s3[0]);
    mp[s1] = true;
    mp[s2] = true;
    mp[s3] = true;
    if (mp["A>B"] && mp["A>C"] && mp["B>C"])
        cout << "CBA";
    else if (mp["A>B"] && mp["A>C"] && mp["C>B"])
        cout << "BCA";
    else if (mp["B>A"] && mp["B>C"] && mp["C>A"])
        cout << "ACB";
    else if (mp["B>A"] && mp["B>C"] && mp["A>C"])
        cout << "CAB";
    else if (mp["C>A"] && mp["C>B"] && mp["A>B"])
        cout << "BAC";
    else if (mp["C>A"] && mp["C>B"] && mp["B>A"])
        cout << "ABC";
    else 
        cout << "Impossible";
    return 0;
}