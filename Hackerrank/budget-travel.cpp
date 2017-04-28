#include <bits/stdc++.h>
using namespace std;

int d, n, p, input;
vector<int> costs;
vector<int> prefs[20];
map<int, bool> selected;

int solve(int i, int curSol, int bestSol) {
    int prevBest = bestSol;
    for (int j = 0; j < prefs[i].size(); j++) {
        int cost = costs[prefs[i][j]];
        if (selected[prefs[i][j]] == false && curSol + cost < bestSol) {
            if (i == n-1) {
                bestSol = curSol + cost;
            } else {
                selected[prefs[i][j]] = true;
                int sol = solve(i+1, curSol + cost, bestSol);
                if (sol != -1) {
                    bestSol = sol;
                }
                selected[prefs[i][j]] = false;
            }
        }
    }
    if (prevBest == bestSol) {
        return -1;
    } else {
        return bestSol;    
    }
}

int main() {
    cin >> d >> n;
    for (int i = 0; i < d; i++) {
        cin >> input;
        costs.push_back(input);
    }
    for (int i = 0; i < n; i++) {
        cin >> p;
        for (int j = 0; j < p; j++) {
            cin >> input;
            prefs[i].push_back(input-1);
        }
    }
    cout << solve(0, 0, INT_MAX) << endl;
    return 0;
}
