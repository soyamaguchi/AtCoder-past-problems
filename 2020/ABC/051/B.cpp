#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define rep1(i,n) for(int i=1; i<=(int)(n); i++)
#define all(c) c.begin(),c.end()

const int INF = 1000000000;

int main(){
    int K, S;

    cin >> K >> S;

    int count = 0;

    rep (i, K+1) {
        rep (j, K+1) {
            int sum = S - i - j;
            if (sum >= 0 && sum <= K) count++;
        }
    }

    cout << count << endl;
}
