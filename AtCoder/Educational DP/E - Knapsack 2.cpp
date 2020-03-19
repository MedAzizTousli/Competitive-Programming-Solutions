// E - Knapsack 2
#include <bits/stdc++.h>
using namespace std;

#define VMAX 100000
#define WMAX 1000000000
vector<int> dp(VMAX+1, WMAX+1);

int main(){
	int N,W; cin>>N>>W;
	dp[0] = 0;
	for(int i=1; i<=N; i++){
		int w,v; cin>>w>>v;
		for(int j=VMAX; j>=v; j--) dp[j] = min(dp[j], dp[j-v] + w);
	}

	int a = 0;
	for(a=VMAX; a>=1; a--) if(dp[a]<=W) break;
	cout<< a <<endl;