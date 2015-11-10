#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int x;
    while (cin >> x && x != 0) {
        int sum=0;
        if (abs(x%2) == 1) x++;
        for (int i = 0; i < 5; i++)
            sum += x+2*i;
        cout << sum << endl;
    }
    return 0;
}
