#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int iniBarr, endBarr;
} barrier;

int n, x, y, d, iniBarr, endBarr;
long long int res = 0;
barrier in;
vector<barrier> vet;

bool sortBarriers (barrier b1, barrier b2) {
    if (b1.iniBarr < b2.iniBarr) return true;
    if (b1.iniBarr == b2.iniBarr && b1.endBarr > b2.endBarr) return true;
    return false;
}

int main (int argc, char** argv) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y >> d;
        in.iniBarr = x;
        in.endBarr = x+d;
        vet.push_back(in);
    }
    sort(vet.begin(), vet.end(), sortBarriers);
    iniBarr = 0;
    endBarr = -1;
    for (int i = 0; i < vet.size(); i++) {
        if (vet[i].iniBarr > endBarr) {
            res += endBarr-iniBarr+1;
            iniBarr = vet[i].iniBarr;
        }
        endBarr = vet[i].endBarr;
    }
    res += endBarr-iniBarr+1;
    cout << res;
    return 0;
}
