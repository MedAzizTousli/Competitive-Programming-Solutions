#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    vector<vector<int>> v(3);
    vector<int> a(3);
    vector<int> b(3);
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
        {
            int c;
            cin >> c;
            v[i].push_back(c);
        }
    bool y = true;
    for (int i=0; i<=v[0][0]; i++)
    {
        a[0] = i;
        b[0] = v[0][0] - i;
        for (int j=0; j<=v[1][1]; j++)
        {
            a[1] = j;
            b[1] = v[1][1] - j;
            for (int k=0; k<=v[2][2]; k++)
            {
                y = true;
                a[2] = k;
                b[2] = v[2][2] - k;
                for (int p=0; p<3; p++)
                {
                    for (int q=0; q<3; q++)
                    {
                        if (a[p]+b[q] != v[p][q])
                        {
                            y = false;
                            break; 
                        }
                    }
                    if (y == false)
                        break;
                }
                if (y == true)
                    return cout << "Yes", 0;
            }
        }
    }
    cout << "No";
    return 0;
}