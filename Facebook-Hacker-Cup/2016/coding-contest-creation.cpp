#include <bits/stdc++.h>
using namespace std;

int main (int argc, char** argv) {
    int T, res, n, pi, count;
    vector<int> problems;
    cin >> T;

    for (int caseN = 1; caseN <= T; caseN++) {
        cout << "Case #" << caseN << ": ";
        res = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> pi;
            problems.push_back(pi);
        }
        while (problems.size() > 0) {
            pi = problems[0];
            count = 1;
            problems.erase(problems.begin());
            for (int i = 0; i < problems.size() && count != 4;) {
                if (problems[i] == pi) {
                    i++;
                    continue;
                }
                if (problems[i] - pi > 10) break;
                pi = problems[i];
                problems.erase(problems.begin() + i);
                count++;
            }
            if (count != 4)
                res += 4 - count;
            count = 0;
        }
        cout << res << endl;
    }
    return 0;
}
