#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n, minVal, pos=-1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int in;
        cin >> in;
        if (pos == -1 || in < minVal) {
            minVal = in;
            pos = i;
        }
    }
    cout << "Menor valor: " << minVal << endl;
    cout << "Posicao: " << pos << endl;
    return 0;
}
