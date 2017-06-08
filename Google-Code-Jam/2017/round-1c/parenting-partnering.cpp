#include <bits/stdc++.h>
using namespace std;

int T, res;
int ac, aj;

const int MAX_ITEMS = 101;

typedef struct {
    int start, end;
    int length;
} Interval;

Interval interval;
vector<Interval> cActs, jActs;
vector<int> openTakes, costTakes, freeTakes;
int used;

bool sortIntervalsByStart(Interval a, Interval b) {
    return a.start < b.start;
}

int dp[MAX_ITEMS][24*61];

void solve() {
    if (ac == 0 && aj == 0) {
        res = 0;
        return;
    }
    res = 0;
    sort(cActs.begin(), cActs.end(), sortIntervalsByStart);
    sort(jActs.begin(), jActs.end(), sortIntervalsByStart);
    openTakes.clear(); costTakes.clear(); freeTakes.clear();

    int sumIntervals = 0, sumFree = 0;
    int c = 0, j = 0;
    int nextC, nextJ;
    int intervals = 0;
    while (c < ac || j < aj) {
        if (ac == 0) {
            nextC = 10000;
        } else if (c == ac-1) {
            nextC = cActs[0].start + 24*60;
        } else {
            nextC = cActs[c+1].start;
        }
        if (aj == 0) {
            nextJ = 10000;
        } else if (j == aj) {
            nextJ = jActs[0].start + 24*60;
        } else {
            nextJ = jActs[j].start;
        }
        intervals++;
        if (nextC < nextJ) {
            if (nextC == cActs[c].end) {
                c++;
                intervals--;
                continue;
            }
            openTakes.push_back(nextC - cActs[c].end);
            sumIntervals += nextC - cActs[c].end;
            c++;
        } else {
            if (nextJ > cActs[c].end) {
                freeTakes.push_back(nextJ - cActs[c].end);
                sumFree += nextJ - cActs[c].end;
            }
            j++;
            c++;
            while (j != aj && jActs[j].start < nextC) {
                int length = jActs[j].start - jActs[j-1].end;
                if (length) {
                    costTakes.push_back(length);
                }
                j++;
            }
            if (nextC - jActs[j-1].end) {
                sumFree += nextC - jActs[j-1].end;
            }
        }
    }
    int available = 12*60 - used;
    if (sumIntervals >= available) {
        sort(openTakes.begin(), openTakes.end());
        int i = 0;
        while (i < openTakes.size() && openTakes[i] <= available) {
            available -= openTakes[i];
            i++;
        }
        res = 2 * (intervals - i);
    } else if (sumIntervals + sumFree >= available) {
        res = 2;
    } else {
        intervals -= openTakes.size();
        sort(costTakes.begin(), costTakes.end());
        int i = costTakes.size()-1;
        while (available > 0) {
            available -= costTakes[i];
            i--;
            intervals++;
        }
        res = 2 * intervals;
    }
}

void input() {
    used = 0;
    cActs.clear(); jActs.clear();
    cin >> ac >> aj;
    for (int i = 0; i < ac; i++) {
        cin >> interval.start >> interval.end;
        if (interval.end >= interval.start) {
            used += interval.end - interval.start;
        } else {
            used += interval.end - interval.start + 24*60;
        }
        cActs.push_back(interval);
    }
    for (int i = 0; i < aj; i++) {
        cin >> interval.start >> interval.end;
        jActs.push_back(interval);
    }
}

int main(int argc, char** argv) {
    cin >> T;
    for (int t = 1; t <= T; t++) {
        input();
        solve();
        cout << "Case #" << t << ": " << res << endl;
    }
}