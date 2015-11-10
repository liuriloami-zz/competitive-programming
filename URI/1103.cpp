#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int h1, m1, h2, m2;
    while (cin >> h1 >> m1 >> h2 >> m2 && h1+m1+h2+m2 != 0) {
        int hours = h2-h1;
        if (h2 < h1 || (h2 == h1 && m2 < m1))
            hours += 24;
        int minutes = m2-m1;
        if (m2 < m1) {
            hours--;
            minutes += 60;
        }
            cout << hours*60 + minutes << endl;
    }
    return 0;
}
