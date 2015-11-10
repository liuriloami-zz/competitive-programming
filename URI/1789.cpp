#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    while (cin >> n) {
        int maxSpeed=-1;
        for (int i = 0; i < n; i++) {
            int speed;
            cin >> speed;
            maxSpeed = max(maxSpeed, speed);
        }
        if (maxSpeed < 10)
            cout << 1 << endl;
        else if (maxSpeed < 20)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
 
    return 0;
}
