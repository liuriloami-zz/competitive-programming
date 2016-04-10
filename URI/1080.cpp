#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int x, pos = -1, maxVal;
    cin >> maxVal;
    for (int i = 2; i <= 100; i++) {
        cin >> x;
        if (x > maxVal) {
            maxVal = x;
            pos = i;
        }
    }
    cout << maxVal << endl << pos << endl;
    return 0;
}
