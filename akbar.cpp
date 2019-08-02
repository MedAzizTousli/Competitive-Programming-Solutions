#include<bits/stdc++.h>
using namespace std;

int main() {

    int T;
    scanf("%d", &T);

    while(T--) {

        int N, R, M;
        bool optimise = true;

        scanf("%d", &N);
        scanf("%d", &R);
        scanf("%d", &M);

        vector<pair<int,int>> vector_M;
        vector<vector<int>> adj(N+1);

        for (int i = 0; i < R; i++)
        {
            int x,y;
            scanf("%d", &x); 
            scanf("%d", &y); 
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        for (int i = 0; i < M; i++)
        {
            int K,S;
            scanf("%d", &K);
            scanf("%d", &S);
            pair<int,int> p = make_pair(K,S);
            vector_M.push_back(p);
        }

        // Solution here

        vector<bool> protecteed(N+1,false);

        for (int i=0; i < vector_M.size(); i++)
        {

            int sommet = vector_M[i].first;
            int depth = vector_M[i].second;
            vector<int> depth_vector(N+1);
            queue<int> q;
            set<int> passed;

            q.push(sommet);
            
            if (protecteed[sommet]) 
            {
                optimise = false;
                break;
            }

            passed.insert(sommet);
            protecteed[sommet] = true;
            depth_vector[sommet] = 0;

            while(!q.empty()) {

                int v = q.front();
                q.pop();

                if (depth_vector[v] == depth) continue;

                for (int u : adj[v]) {

                    passed.insert(u);

                    if (protecteed[u])
                    {
                        bool pass = (find(passed.begin(), passed.end(), u) != passed.end());
                        if (!pass)
                        {
                            optimise = false;
                            break;
                        }
                    }

                    else
                    {
                        protecteed[u] = true;
                        q.push(u);
                        depth_vector[u] = depth_vector[v] + 1;
                    }

                }
                if (!optimise) break;
            }
            if (!optimise) break;
        }
        if (optimise)
        {
            for (int i=1; i<protecteed.size(); i++)
            {
                if (protecteed[i] == false) {
                    optimise = false;
                    break;
                }
            }
        }

        if (optimise)
            printf("Yes\n");
        else
            printf("No\n");

    }
    return 0;
}
