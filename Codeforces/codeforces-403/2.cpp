#include <bits/stdc++.h>
using namespace std;

int n;

int main (int argc, char** argv) {
    cin >> n;
    long long int v[n], pos[n];
    long long int maxPos = 0, minPos = 1e9;

    // Read positions
    for (int i = 0; i < n; i++) {
        cin >> pos[i];
        maxPos = max(maxPos, pos[i]);
        minPos = min(minPos, pos[i]);
    }

    //Read speeds
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    //Compute final position = maxdist - avg
    double vSum = 0, wSum = 0;
    for (int i = 0; i < n; i++) {
        vSum += v[i];
        wSum += v[i]*(maxPos-pos[i]+minPos);
    }
    printf("%.10lf\n", wSum / vSum);
}