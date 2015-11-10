#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int tests, n, age;
    vector<int> vet;
    cin >> tests;
    for (int t = 1; t <= tests; t++) {
        cout << "Case " << t << ": ";
        cin >> n;
        vet.clear();
        for (int i = 0; i < n; i++) {
            cin >> age;
            vet.push_back(age);
        }
        sort(vet.begin(), vet.end());
        cout << vet[n/2] << endl;
    }
}
