#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it
#define size SIZE
using namespace std;

// BEFORE MAIN
int n;
vector<int> parent;
vector<int> size;

void make_set(int v) {
    parent[v] = v;
    size[v] = 1;
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
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}

signed main()
{
    int n, m, k;
    cin >> n >> m >> k;
    parent.resize(n+1);
    size.resize(n+1);
    vector<int> fr(n+1,0);
    vector<int> en(n+1,0);
    rep(i, 1, n+1)
        make_set(i);
    rep(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        union_sets(a, b);
        fr[a]++;
        fr[b]++;
    }
    rep(i, 1, n+1)
        size[find_set(i)] = max(size[find_set(i)], size[i]);
    rep(i, 1, n+1)
        size[i] = size[find_set(i)];
    rep(i, 0, k)
    {
        int a, b;
        cin >> a >> b;
        if (find_set(a) == find_set(b))
        {
            en[a]++;
            en[b]++;
        }
    }
    rep(i, 1, n+1)
        cout << size[i] - fr[i] - en[i] - 1 << " ";
    return 0;
}