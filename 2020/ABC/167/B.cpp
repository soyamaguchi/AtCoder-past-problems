#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, C, K;

    cin >> A >> B >> C >> K;

    // int n1 = 1*A;
    // int n0 = 0*B;
    // int n01 = (-1)*C;

    int sum;

    if (A>K) {
        sum = 1*K;
        K = 0;
    }
    if (K==A) {
        sum = A;
        K -= A;
    }
    if (A<K) {
        sum = 1*A;
        K -= A;
    }

    if (K==B) K -= B;
    if (B<K) {
        K -= B;
    }

    if (0<K) {
        sum += (-1)*K;
    }



    // for (int i=0; i<K; i++) {
    //     if (A==K) {
    //         sum = A;
    //         break;
    //     }
    //     if (i<A) {
    //         sum++;
    //         continue;
    //     }
    //     if (i==A) i += (B==0) ? 0 : (B-1);

    //     sum--;
    // }

    cout << sum << endl;
}
