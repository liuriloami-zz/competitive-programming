#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int tests;
    cin >> tests;
    while (tests--) {
        int popa, popb, years=0;
        double growa, growb;
        cin >> popa >> popb;
        cin >> growa >> growb;
        while (popa <= popb && years <= 100) {
            years++;
            popa *= 1.0+growa/100.0;
            popb *= 1.0+growb/100.0;
        }
        if (years <= 100)
            cout << years << " anos.\n";
        else
            cout << "Mais de 1 seculo.\n";
    }
    return 0;
}
