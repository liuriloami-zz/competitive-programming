#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int x;
    cin >> x;
    if (x % 2 == 0) x++;
    for (int i = 0; i < 6; i++)
        cout << x + 2*i << endl;
    return 0;
}
