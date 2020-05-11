#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, C, K;

    cin >> A >> B >> C >> K;

    int xa = min(A, K);
    K -= xa;
    int xb = min(B, K);
    K -= xb;
    int sum = xa - K;

    cout << sum << endl;
}
