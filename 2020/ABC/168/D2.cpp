#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <cmath>
#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <algorithm>
#include <complex>
#include <unordered_map>
#include <unordered_set>
#include <random>
#include <cassert>
#include <fstream>
#include <utility>
#include <functional>
#include <time.h>
#include <stack>
#include <array>
#include <list>

using namespace std;

typedef long long ll;

#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rep1(i,n) for(int i=1; i<=(int)(n); i++)
#define all(c) c.begin(),c.end()
#define psb push_back
#define ppb pop_back

const int INF = 1000000000;

int main() {
    int N, M;
    cin >> N >> M;

    vii to(N);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        to[a].psb(b);
        to[b].psb(a);
    }

    queue<int> q;
    vector<int> dist(N, INF);
    vector<int> pre(N, -1);

    dist[0] = 0;
    q.push(0);
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : to[v]) {
            if (dist[u] != INF) continue;

            dist[u] = dist[v] + 1;
            pre[u] = v;
            q.push(u);
        }
    }

    cout << "Yes" << endl;
    rep (i, N) {
        if (i == 0)
            continue;
        int ans = pre[i];
        ++ans;
        cout << ans << endl;
    }
}
