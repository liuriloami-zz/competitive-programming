#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n, fact=1;
    cin >> n;
    while (n != 1)
        fact *= n--;
    cout << fact << endl;
}
