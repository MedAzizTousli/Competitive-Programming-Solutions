#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<tuple<int, int, int>> v;
    for (int i=0; i<n; i++)
    {
        int x,y,h;
        cin >> x >> y >> h;
        v.emplace_back(h, x, y);
    }
    sort(v.begin(), v.end());
    for (int cx=0; cx<=100; cx++)
        for (int cy=0; cy<=100; cy++)
        {
            bool z = true;
            int x0, y0, h0;
            int mini = INT_MAX;
            for (auto it:v)
            {
                x0 = get<1>(it); 
                y0 = get<2>(it);
                h0 = get<0>(it); 
                if (h0 == 0)
                    mini = min(mini, abs(cx-x0) + abs(cy-y0));
                else 
                    break;
            }
            int H = abs(cx-x0) + abs(cy-y0) + h0;
            if (H > mini)
                z = false;
            for (auto it:v)
            {
                int xi = get<1>(it); 
                int yi = get<2>(it); 
                int hi = get<0>(it);
                int H0 = H - abs(cx-xi) - abs(cy-yi);
                if (hi == 0)
                    continue;
                if (H0 != hi)
                {
                    z = false;
                    break;
                }
            }
            if (z == true)
            {
                cout << cx << " " << cy << " " << H;
                return 0;
            }
        }
    return 0;
}