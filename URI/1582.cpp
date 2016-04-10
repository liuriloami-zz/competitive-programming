#include <bits/stdc++.h>
using namespace std;
 
int mdc (int a, int b) {
    if (b > a) swap(a,b);
    if (b == 0) return a;
    return mdc(b, a%b);
}
 
int main (int argc, char** argv) {
    int x, y, z;
    int hip, sum_all;
    while (cin >> x >> y >> z) {
        hip = max(x, max(y,z));
        sum_all = pow(x,2) + pow(y,2) + pow(z,2);
        if (pow(hip,2) == sum_all-pow(hip,2)) {
            if (mdc(x, mdc(y, z)) == 1)
                cout << "tripla pitagorica primitiva" << endl;
            else
                cout << "tripla pitagorica" << endl;
        } else
            cout << "tripla" << endl;
    }
    return 0;
}
