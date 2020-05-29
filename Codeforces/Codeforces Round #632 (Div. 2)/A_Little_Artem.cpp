#include <bits/stdc++.h>
#define ll long long
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int b = (n*m+1)/2;
        int w;
        if ((n*m)%2 == 0)
            w = n*m - b - 1;
        else 
            w = n*m - b;
        if (n%2 == 0 && m%2 == 0)
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    if (j == 1 && i == n - 1)
                        cout << "B";
                    else if (j%2 == 0)
                        cout << "B";
                    else 
                        cout << "W";
                }
                cout << endl;
            }
        }
        else if (n%2 == 0 && m%2 != 0)
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    if (j == 1 && i == n - 1)
                        cout << "B";
                    else if (j == m - 1 && i%2 == 0)
                        cout << "W";
                    else if (j == m - 1 && i%2 == 1)
                        cout << "B";
                    else if (j%2 == 0)
                        cout << "B";
                    else 
                        cout << "W";
                }
                cout << endl;
            }
        }
        else if (n%2 != 0 && m%2 == 0)
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    if (j == 1 && i == n - 1)
                        cout << "B";
                    else if (j%2 == 0)
                        cout << "B";
                    else 
                        cout << "W";
                }
                cout << endl;
            }
        }
        else 
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    if (j == m - 1 && i%2 == 0)
                        cout << "B";
                    else if (j == m - 1 && i%2 != 0)
                        cout << "W";
                    else if (j%2 == 0)
                        cout << "B";
                    else 
                        cout << "W";
                }
                cout << endl;
            }
        }
    }
    return 0;
}