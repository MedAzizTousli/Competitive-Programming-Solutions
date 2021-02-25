#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

// BEFORE MAIN
int n;
vector<int> parent;
vector<int> sz;

void make_set(int v) {
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
}

signed main()
{
    // MAIN
    cin >> n;
    parent.resize(n+1);
    sz.resize(n+1);
    int m;
    cin >> m;
    vector<pair<int, int>> v(m);
    rep(i, 1, n+1) // INITIALIZATION
        make_set(i);
    rep(i, 1, n+1) // sz[root] = maximum sz
        sz[find_set(i)] = max(sz[find_set(i)], sz[i]);
    rep(i, 1, n+1) // sz[i] = sz[root]
        sz[i] = sz[find_set(i)];
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        union_sets(a, b);
    }
    cout << *max_element(all(sz));
	return 0;
}