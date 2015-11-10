#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n, sum;
    while (cin >> n && n != 0) {
        sum = 0;
        for (int i = 0; i < n; i++) {
            int game;
            cin >> game;
            sum += game;
        }
        cout << "Mary won " << n-sum << " times and John won " << sum << " times" << endl;
    }
    return 0;
}
