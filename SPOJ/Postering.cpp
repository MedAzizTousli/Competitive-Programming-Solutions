#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

const int N = 5e5 + 2;

int n, d[N], res, h[N];
stack<int> s;

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", d + i, h + i);
		if (s.empty()) {
			res++;
			s.push(h[i]);
		} else {
			while (s.top() > h[i]) {
				s.pop();
				if (s.empty())
					break;
			}
			if (s.empty()) {
				res++;
				s.push(h[i]);
			} else {
				if (s.top() == h[i])
					continue;
				else {
					res++;
					s.push(h[i]);
				}
			}
		}
	}
	cout << res;
	return 0;
}