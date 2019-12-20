// https://atcoder.jp/contests/abc138/tasks/abc138_c

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<float> v;
    for (int i=0; i<n; i++)
    {
        float a;
        cin >> a;
        v.push_back(a);
    }
    while (v.size() != 1)
    {
        float min1Index = min_element(v.begin(), v.end()) - v.begin();
        float min1 = *(min1Index + v.begin());
        v.erase(v.begin() + min1Index);

        float min2Index = min_element(v.begin(), v.end()) - v.begin();
        float min2 = *(min2Index + v.begin());
        v.erase(v.begin() + min2Index);

        float moy = (min1 + min2) / 2.0;
        v.push_back(moy);
    }
    printf("%.5f", v[0]);
    return 0;
}
