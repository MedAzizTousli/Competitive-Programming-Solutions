#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool res = true;
    for (int i = s.size() - 1; i >= 0 && res == true; )
    {
        string t;
        if (s[i] == 'm' || s[i] == 'e')
        {
            t = s.substr(i-4, 5);
            if (t != "dream" && t != "erase")
                res = false;
            i = i - 5;
        }
        else if (s[i] == 'r' && s[i-1] == 'e' && s[i-2] == 's')
        {
            t = s.substr(i-5, 6);
            if (t != "eraser")
                res = false;
            i = i - 6;
        }
        else if (s[i] == 'r' && s[i-1] == 'e' && s[i-2] == 'm')
        {
            t = s.substr(i-6, 7);
            if (t != "dreamer")
                res = false;
            i = i - 7;
        }
        else 
            res = false;
    }
    cout << (res?"YES":"NO");
    return 0;
}