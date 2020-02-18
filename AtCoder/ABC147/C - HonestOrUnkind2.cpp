#include<bits/stdc++.h>
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

int compter(string s)
{
    int res = 0;
    for (int i=0; i<s.size(); i++)
        if (s[i] == '1') res++;
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<vector<pair<int,int>>> v(n);
    for (int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        for (int j=0; j<a; j++)
        {
            int x,y;
            cin >> x >> y;
            v[i].push_back(make_pair(x,y));
        }
    }
    int N = n; 
    int arr[N];
    generateAllBinaryStrings(N, arr, 0);
    int ans = 0;
    for (int i=0; i<bin.size(); i++)
    {
        bool z = true;
        for (int j=0; j<bin[i].size(); j++)
        {
            for (int k=0; k<v[j].size(); k++)
            {
                int curr_person = j;
                int other = v[j][k].first;
                int other_state = v[j][k].second;
                int curr_person_state = bin[i][j] - '0';
                int curr_other_state = bin[i][other-1] - '0';
                if (curr_person_state && curr_other_state != other_state)
                    {
                        z = false;
                        break;
                    }   
            }
        }
        if (!z) continue;
        ans = max(ans, compter(bin[i]));
    }
    cout << ans;
    return 0;
}