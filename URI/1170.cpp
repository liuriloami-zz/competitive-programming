#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double sup;
    int res, tests;
    cin >> tests;
    while (tests--) {
        cin >> sup;
        res = 0;
        while (sup > 1.0) {
            sup /= 2.0;
            res++;
        }
        cout << res << " dias" << endl;
    }
    return 0;
}
