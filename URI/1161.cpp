#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    long long int a, b, sum_a, sum_b;
    while (cin >> a >> b) {
        sum_a = sum_b = 1;
        while (a != 0) sum_a *= a--;
        while (b != 0) sum_b *= b--;
        cout << sum_a + sum_b << endl;
    }
    return 0;
}
