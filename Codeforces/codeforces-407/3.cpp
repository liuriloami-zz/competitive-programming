#include <bits/stdc++.h>
using namespace std;

int main (int argc, char** argv) {
    int n;
    vector<long long int> vet;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long int lastN, lastSum = 0, input;
        cin >> input;
        if (i > 0) {
            long long int v = abs(input - lastN);
            if (i % 2 == 0) {
                v *= -1;
            }
            vet.push_back(lastSum + v);
            lastSum += v;
        }
        lastN = input;
    }
    int maxPos = 0, minPos = 0;
    int res = 0;
    for (int i = 0; i < vet.size(); i++) {
        if (maxPos != 0 || i % 2 == 0) {
            maxPos += vet[i];
            if (maxPos > res) res = maxPos;
            if (maxPos < 0)   maxPos = 0;
        }
        if (i > 0 || minPos != 0 || i % 2 == 1) {
            minPos -= vet[i];
            if (minPos > res) res = minPos;
            if (minPos < 0)   minPos = 0;
        }
    }
    cout << res << endl;
}