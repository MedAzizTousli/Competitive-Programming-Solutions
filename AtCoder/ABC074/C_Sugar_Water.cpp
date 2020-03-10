#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
// rep(i, 1, 5) --> {1,2,3,4}
// rep(i, 5, 1) --> {4,3,2,1}
// rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int mass_sugar_max = 0, mass_water_max = 0;
    float ans = 0;
    rep(i, 0, 100)
        rep(j, 0, 100)
            rep(k, 0, 100)
                rep(l, 0, 100)
                {
                    float mass_water = i*100*a + j*100*b;
                    float mass_sugar = k*c + l*d;
                    if (mass_water == 0) continue;
                    float density = mass_sugar / (float)(mass_sugar + mass_water);
                    if (mass_sugar + mass_water <= f && mass_sugar / mass_water <= (float)e/100 && density > ans)
                    {
                        ans = density;
                        mass_sugar_max = mass_sugar;
                        mass_water_max = mass_water;
                    }
                }
    if (ans == 0)
        return cout << a*100 << " " << 0, 0;
    cout << mass_water_max + mass_sugar_max << " " << mass_sugar_max; 
    return 0;
}