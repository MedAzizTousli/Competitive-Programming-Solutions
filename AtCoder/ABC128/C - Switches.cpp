#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> bin;

void generateAllBinaryStrings(int n, int arr[], int i)
{ 
    string s = "";
	if (i == n) {
        for (int i = 0; i < n; i++) 
            s+=to_string(arr[i]); 
        bin.push_back(s);
		return;  
	} 
	arr[i] = 0; 
	generateAllBinaryStrings(n, arr, i + 1); 
	arr[i] = 1; 
	generateAllBinaryStrings(n, arr, i + 1); 
}

int main() 
{
    // INPUT 
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(m);
    for (int i=0; i<m; i++)
    {
        int k;
        cin >> k;
        for (int j=0; j<k; j++)
        {
            int s;
            cin >> s;
            v[i].push_back(s);
        }
    }
    vector<int> p(m);
    for (int i=0; i<m; i++)
        cin >> p[i];

    // GENERATE COMBINAISONS
    int N = n; 
	int arr[N];
    int ans = 0;
	generateAllBinaryStrings(N, arr, 0); 
    for (int k=0; k<bin.size(); k++)
    {
        bool y = true;
        for (int i=0; i<v.size(); i++)
        {
            int nb_switch = 0;
            for (int j=0; j<v[i].size(); j++)
            {
                int switchid = v[i][j];
                if (bin[k][switchid-1] == '1')
                    nb_switch++;
            }
            if (nb_switch % 2 != p[i])
                y = false;
        }
        if (y == true)
            ans++;
    }
    cout << ans;
    return 0;
}