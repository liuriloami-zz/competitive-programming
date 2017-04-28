#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 500, MAX_R = 200;

int n, q, r, c, l;
int price[MAX_R][MAX_N], minL[MAX_R][MAX_N], maxL[MAX_R][MAX_N];
int bestPrice[MAX_N][MAX_N + 1]; // bestPrice[night][length]

int main (int argc, char** argv) {
    cin >> n >> r >> q;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < n; j++) {
            cin >> price[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < n; j++) {
            cin >> minL[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maxL[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            bestPrice[i][j] = 0;
            for (int k = 0; k < r; k++) {
                if (price[k][i] && minL[k][i] <= j && maxL[k][i] >= j 
                    && (bestPrice[i][j] == 0 || bestPrice[i][j] > price[k][i])) {
                    bestPrice[i][j] = price[k][i];
                }
            }
        }
    }
    for (int i = 0; i < q; i++) {
        cin >> c >> l;
        int total = 0;
        for (int j = c-1; j < c-1+l; j++) {
            if (bestPrice[j][l]) {
                total += bestPrice[j][l];
            } else {
                total = -1;
                break;
            }
        }
        cout << total << endl;
    }
    return 0;
}