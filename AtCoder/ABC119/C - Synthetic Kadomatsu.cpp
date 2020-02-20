#include<bits/stdc++.h>
#define ll long long
using namespace std;

int compter(vector<bool> v)
{
    int sum = 0;
    for (int i=0; i<v.size(); i++)
        if (v[i] == 1)
            sum++;
    return max(sum - 1,0);
}

int main() 
{
    // Input
    int n, A, B, C;
    cin >> n >> A >> B >> C;
    vector<int> bambo(n);
    for (int i=0; i<n; i++)
        cin >> bambo[i];
    int ans = INT_MAX;
    for(int mask1 = 1; mask1 < (1<<n); mask1++)
    {
        // A
        vector<bool> bina(n, 0);
        for(int i = 0; i < n; i++) if(mask1 & (1<<i))
            bina[i] = 1;
        for(int mask2 = 1; mask2 < (1<<n); mask2++)
        {
            if ((mask1 & mask2) != 0) continue;
            // B
            vector<bool> binb(n, 0);
            for(int i = 0; i < n; i++) if(mask2 & (1<<i))
                binb[i] = 1;
            for(int mask3 = 1; mask3 < (1<<n); mask3++)
            {
                if ((mask1 & mask3) != 0 || (mask2 & mask3) != 0) continue;
                // C
                vector<bool> binc(n, 0);
                for(int i = 0; i < n; i++) if(mask3 & (1<<i))
                    binc[i] = 1;
                // Work
                int tA=0, tB=0, tC=0;
                for (int i=0; i<n; i++)
                    if (bina[i] == 1)
                        tA += bambo[i];
                for (int i=0; i<n; i++)
                    if (binb[i] == 1)
                        tB += bambo[i];
                for (int i=0; i<n; i++)
                    if (binc[i] == 1)
                        tC += bambo[i];
                int res = 10*compter(bina) + 10*compter(binb) + 10*compter(binc) + abs(A-tA) + abs(B-tB) + abs(C-tC);
                ans = min(res, ans);           
            }
        }
    }
    cout << ans;
    return 0;
}