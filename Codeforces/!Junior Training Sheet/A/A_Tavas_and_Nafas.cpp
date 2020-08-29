#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    map<int, string> mp = {    
{0,	"zero"}	,{10,	"ten"},  	 	 
{1,	"one"}	,{11,	"eleven"},  	 	 
{2,	"two"}	,{12,	"twelve"},        {20,"twenty"},
{3,	"three"}	,{13,	"thirteen"},  	{30,	"thirty"},
{4,	"four"}	,{14,	"fourteen"},  	{40,	"forty"},
{5,	"five"}	,{15,	"fifteen"},   	{50,	"fifty"},
{6,	"six"}	,{16,	"sixteen"},  	{60,	"sixty"},
{7,	"seven"}	,{17,	"seventeen"},  	{70,	"seventy"},
{8,	"eight"}	,{18,	"eighteen"},   {80,	"eighty"}, 
{9,	"nine"}	,{19,	"nineteen"},  	{90,	"ninety"}
    };
    int n;
    cin >> n;
    if (n < 20)
        cout << mp[n];
    else 
    {
        int x = n / 10;
        int y = n % 10;
        if (y == 0)
            cout << mp[n];
        else 
            cout << mp[x*10] + "-" + mp[y];
    }
    return 0;
}