#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    long long int a, b;
    while(cin >> a >> b) {
        bitset<64> a_bin(a);
        bitset<64> b_bin(b);
        bitset<64> res = (a_bin ^= b_bin);
        cout << res.to_ulong() << endl;
    }
    return 0;
}