#include <bits/stdc++.h>
using namespace std;

int t, n, m;
char stage[100][100];
int improv, maxImprov;

typedef struct {
    char model;
    int x, y;
} Model;

Model model;

vector<Model> maxAdded, added;
map<int,int> row, col, posDiag, negDiag, rowPlus, colPlus;
map<int,int> rowNonPlus, colNonPlus, posDiagX, posDiagNonX;
map<int,int> negDiagNonX, negDiagX;

void solve(int x, int y) {
    if (y == n) {
        solve(x+1, 0);
        return;
    }
    if (x == n) {
        if (improv > maxImprov) {
            maxAdded = added;
            maxImprov = improv;
        }
        return;
    }
    if (stage[x][y] == 'o') {
        solve(x, y+1);
        return;
    }
    if (stage[x][y] == '.') {
        if ( (posDiag[x+y] == 0 || (posDiagX[x+y] > 0 && posDiagNonX[x+y] == 0))
        &&   (negDiag[x-y] == 0 || (negDiagX[x+y] > 0 && negDiagNonX[x-y] == 0))) {
            stage[x][y] = '+';
            model.x = x;
            model.y = y;
            model.model = '+';
            added.push_back(model);
            improv++;
            posDiag[x+y]++;
            negDiag[x-y]++;
            posDiagNonX[x+y]++;
            negDiagNonX[x-y]++;
            solve(x, y+1);
            posDiag[x+y]--;
            negDiag[x-y]--;
            posDiagNonX[x+y]--;
            negDiagNonX[x-y]--;
            improv--;
            added.pop_back();
            stage[x][y] = '.';
        }
        if ( (row[x] == 0 || (rowPlus[x] > 0 && rowNonPlus[x] == 0))
        &&   (col[y] == 0 || (colPlus[y] > 0 && colNonPlus[y] == 0)) ) {
            stage[x][y] = 'x';
            model.x = x;
            model.y = y;
            model.model = 'x';
            added.push_back(model);
            improv++;
            row[x]++;
            rowNonPlus[x]++;
            col[y]++;
            colNonPlus[y]++;
            solve(x, y+1);
            row[x]--;
            rowNonPlus[x]--;
            col[y]--;
            colNonPlus[y]--;
            improv--;
            added.pop_back();
            stage[x][y] = '.';
        }
        if ( (posDiag[x+y] == 0 || (posDiagX[x+y] > 0 && posDiagNonX[x+y] == 0))
        &&   (negDiag[x-y] == 0 || (negDiagX[x+y] > 0 && negDiagNonX[x-y] == 0))
        &&   (row[x] == 0 || (rowPlus[x] > 0 && rowNonPlus[x] == 0))
        &&   (col[y] == 0 || (colPlus[y] > 0 && colNonPlus[y] == 0)) ) {
            stage[x][y] = 'o';
            model.x = x;
            model.y = y;
            model.model = 'o';
            added.push_back(model);
            improv += 2;
            posDiag[x+y]++;
            negDiag[x-y]++;
            posDiagNonX[x+y]++;
            negDiagNonX[x-y]++;
            row[x]++;
            rowNonPlus[x]++;
            col[y]++;
            colNonPlus[y]++;
            solve(x, y+1);
            posDiag[x+y]--;
            negDiag[x-y]--;
            posDiagNonX[x+y]--;
            negDiagNonX[x-y]--;
            row[x]--;
            rowNonPlus[x]--;
            col[y]--;
            colNonPlus[y]--;
            improv -= 2;
            added.pop_back();
            stage[x][y] = '.';
        }
    }
    if (stage[x][y] == 'x') {
        if ( (posDiag[x+y] == 1 || posDiagX[x+y] > 1)
        &&   (negDiag[x-y] == 1 || negDiagX[x+y] > 1)) {
            stage[x][y] = 'o';
            model.x = x;
            model.y = y;
            model.model = 'o';
            added.push_back(model);
            improv++;
            posDiag[x+y]++;
            negDiag[x-y]++;
            posDiagNonX[x+y]++;
            negDiagNonX[x-y]++;
            posDiagX[x+y]--;
            negDiagX[x-y]--;
            solve(x, y+1);
            posDiag[x+y]--;
            negDiag[x-y]--;
            posDiagNonX[x+y]--;
            negDiagNonX[x-y]--;
            posDiagX[x+y]++;
            negDiagX[x-y]++;
            improv--;
            added.pop_back();
            stage[x][y] = 'x';
        }
    }
    if (stage[x][y] == '+') {
        if ( (row[x] == 1 || rowPlus[x] > 1)
        &&   (col[y] == 1 || colPlus[y] > 1)) {
            stage[x][y] = 'o';
            model.x = x;
            model.y = y;
            model.model = 'o';
            added.push_back(model);
            improv++;
            row[x]++;
            rowNonPlus[x]++;
            col[y]++;
            colNonPlus[y]++;
            rowPlus[x]--;
            colPlus[y]--;
            solve(x, y+1);
            row[x]--;
            rowNonPlus[x]--;
            col[y]--;
            colNonPlus[y]--;
            improv--;
            rowPlus[x]++;
            colPlus[y]++;
            added.pop_back();
            stage[x][y] = '+';
        }
    }
    solve(x, y+1);
    return;
}

int main (int argc, char** argv) {
    cin >> t;
    for (int cur = 1; cur <= t; cur++) {
        cin >> n >> m;
        memset(stage, '.', 100*100);
        for (int i = 0; i < m; i++) {
            cin >> model.model >> model.x >> model.y;
            stage[model.x-1][model.y-1] = model.model;
        }
        maxImprov = 0;
        added.clear();
        solve(0, 0);
        cout << "Case #" << cur << ": " << maxImprov << " " << maxAdded.size() << endl;
        for (int i = 0; i < maxAdded.size(); i++) {
            cout << maxAdded[i].model << " " << maxAdded[i].x+1 << " " << maxAdded[i].y+1 << endl;
        }
    }
    return 0;
}