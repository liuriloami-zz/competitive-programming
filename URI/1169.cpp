#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    unsigned long long int sum, bef;
    int tests, houses;
    cin >> tests;
    while (tests--) {
        cin >> houses;
        sum = bef = 0;
        for (int i = 0; i < houses; i++) {
            if (bef == 0) bef = 1;
            else bef *= 2;
            sum += bef;
        }
        cout << sum/12000 << " kg" << endl;
    }
    return 0;
}
