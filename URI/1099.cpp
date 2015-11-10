#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int tests;
    cin >> tests;
    while (tests--) {
        int x, y, sum = 0;
        cin >> x >> y;
        for (int i = min(x,y)+1; i < max(x,y); i++)
            if (i%2 == 1) sum += i;
        cout << sum << endl;
    }
    return 0;
}
