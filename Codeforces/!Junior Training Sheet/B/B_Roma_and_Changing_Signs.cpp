#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> a(n);
    int sum = 0;
    rep(i, 0, n)
    {
        cin >> v[i];
        if (v[i] < 0 && k > 0)
        {
            sum += abs(v[i]);
            k--;
        }
        else 
            sum += v[i];
        a[i] = abs(v[i]);
    }
    int m = *min_element(all(a));
    if (k > 0 && k%2==1)
        sum -= 2*m;
    cout << sum;
	return 0;
}