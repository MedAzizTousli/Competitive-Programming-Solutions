#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    //dp
    ll d, g;
    cin >> d >> g;
    vector<ll> nb_problems(d);
    vector<ll> bonus_score(d);
    for (ll i=0; i<d; i++)
    {
        ll p, c;
        cin >> p >> c;
        nb_problems[i] = p;
        bonus_score[i] = c;
    }
    ll ans = INT_MAX;
    for(ll mask = 0; mask < (1<<d); mask++)
    {
        ll score = 0;
        ll probs = 0;
        vector<bool> active(d,false);
        for(ll i=0; i<d; i++) 
            if(mask & (1<<i))
            {
                active[i] = true;
                probs += nb_problems[i];
                score += nb_problems[i] * (i+1) * 100 + bonus_score[i];
            }
        ll i = d - 1;
        while (score < g && i >= 0)
        {
            if (active[i])
                i--;
            else 
            {
                ll rem = g - score;
                if (rem <= (nb_problems[i]-1)*(i+1)*100)
                {
                    score = g + 1;
                    probs += rem / ((i + 1) * 100) + ((rem % ((i + 1) * 100)) == 0 ? 0 : 1);
                    break;
                }
                else 
                {
                    score += (nb_problems[i]-1)*(i+1)*100;
                    probs += nb_problems[i] - 1;
                    i--;
                }
            }
        }
        if (score >= g)
            ans = min(ans, probs);
    }
    cout << ans;
    return 0;
}