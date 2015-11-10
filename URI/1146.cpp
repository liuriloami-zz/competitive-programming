#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int x;
    while (cin >> x && x != 0) {
        for (int i = 1; i <= x; i++) {
            cout << i;
            if (i == x)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}
