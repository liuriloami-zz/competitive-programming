#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int tests, x, y;
    cin >> tests;
    while (tests--) {
        int sum=0;
        cin >> x >> y;
        if (x%2 == 0) x++;
        for (int i = 0; i < y; i++)
            sum += x+2*i;
        cout << sum << endl;
    }
    return 0;
}
