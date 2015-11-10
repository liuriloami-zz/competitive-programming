#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n[10], v;
    cin >> v;
    n[0] = v;
    for (int i = 1; i < 10; i++)
        n[i] = 2*n[i-1];
    for (int i = 0; i < 10; i++)
        cout << "N[" << i << "] = " << n[i] << endl;
    return 0;
}
