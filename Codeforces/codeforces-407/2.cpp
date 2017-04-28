#include <bits/stdc++.h>
using namespace std;

int main (int argc, char** argv) {
    long long int b1, q, l, m;
    int res = 0;
    cin >> b1 >> q >> l >> m;
    map<long long int, int> bad, occ;
    for (int i = 0; i < m; i++) {
        long long int a;
        cin >> a;
        bad[a] = 1;
    }
    long long int cur = b1;
    while (abs(cur) <= l && !occ[cur]) {
        if (!bad[cur]) {
            res++;
        }
        occ[cur] = 1;
        cur = cur * q;
    }
    if (occ[cur] && (!bad[cur] || !bad[cur*q])) {
        cout << "inf" << endl;
    } else {
        cout << res << endl;
    }
    return 0;
}