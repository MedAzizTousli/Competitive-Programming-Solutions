#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    string sa, sb, sc;
    cin >> sa >> sb >> sc;
    int ia = 0, ib = 0, ic = 0;
    char curr = sa[0];
    while (true)
    {
        if (ia == sa.size() && curr == 'a')
            return cout << "A", 0;
        if (ib == sb.size() && curr == 'b')
            return cout << "B", 0;
        if (ic == sc.size() && curr == 'c')
            return cout << "C", 0;
        if (curr == 'a')
        {
            curr = sa[ia];
            ia++;
        }
        else if (curr == 'b')
        {
            curr = sb[ib];
            ib++;
        }
        else if (curr == 'c')
        {
            curr = sc[ic];
            ic++;
        }
    }
    return 0;
}