#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int tests;
    cin >> tests;
    while (tests--) {
        long long int a, b;
        bool res = true;
        cin >> a >> b;
        while (b != 0) {
            if (b%10 != a% 10) {
                res = false;
                break;
            }
            b /= 10;
            a /= 10;
        }
        if (res)
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;
    }
    return 0;
}
