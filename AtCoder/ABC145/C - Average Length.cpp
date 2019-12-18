// https://atcoder.jp/contests/abc145/tasks/abc145_c

#include<bits/stdc++.h>
using namespace std;

int fact(int n) { 
    int factorial=1;
    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }
    return factorial;
}


int main() {
    int n;
    cin >> n;
    vector<pair<int,int>> v;
    vector<double> distance;
    for (int i=0; i<n; i++)
        {
            int x,y;
            cin >> x >> y;
            v.push_back(make_pair(x,y));
        }
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
        {
            distance.push_back(sqrt(pow(v[i].first - v[j].first,2)+pow(v[i].second - v[j].second,2)));
        }
    double sum = 0;
    for (int k=0; k<distance.size(); k++)
        {
            sum += distance[k];
        }
    double res = sum * fact(n-1) * 2 / fact(n);
    printf("%9.6f", res);
    return 0;
}