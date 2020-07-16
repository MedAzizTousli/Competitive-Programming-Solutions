// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

int maxHeight(int height[], int width[], int length[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int A[1000], B[1000], C[10001];
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            A[i] = a;
            B[i] = b;
            C[i] = c;
        }
        cout << maxHeight(A, B, C, n) << endl;
    }

} // } Driver Code Ends

typedef tuple<int, int, int> t3i;
bool baseArea_comp(t3i &a, t3i &b)
{
    return get<0>(a) * get<1>(a) > get<0>(b) * get<1>(b);
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int maxHeight(int h[], int w[], int l[], int n)
{
    vector<tuple<int, int, int>> v;
    //Generate all rotation of boxes
    for (int i = 0; i < n; i++)
    {
        if (l[i] > w[i])
            v.push_back(make_tuple(l[i], w[i], h[i]));
        else
            v.push_back(make_tuple(w[i], l[i], h[i]));
        if (w[i] > h[i])
            v.push_back(make_tuple(w[i], h[i], l[i]));
        else
            v.push_back(make_tuple(h[i], w[i], l[i]));
        if (h[i] > l[i])
            v.push_back(make_tuple(h[i], l[i], w[i]));
        else
            v.push_back(make_tuple(l[i], h[i], w[i]));
    }

    //sort acording to base area
    sort(v.begin(), v.end(), baseArea_comp);

    vector<int> ht;

    //store Height using concept of LIS(longest increasing subsequence)
    for (int i = 0; i < 3 * n; i++)
        ht.push_back(get<2>(v[i]));
    int H = 0;
    for (int i = 1; i < 3 * n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            //CAN i go on top of j?? IF  YES execute below
            if (get<0>(v[i]) < get<0>(v[j]) && get<1>(v[i]) < get<1>(v[j]) && ht[j] + get<2>(v[i]) > ht[i])
            {
                ht[i] = ht[j] + get<2>(v[i]);

                //finding max height
                H = max(H, ht[i]);
            }
        }
    }
    return H;
}