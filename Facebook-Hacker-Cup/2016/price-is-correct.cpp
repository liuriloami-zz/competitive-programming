#include <bits/stdc++.h>
using namespace std;

int main (int argc, char** argv) {
    int T, res, sum, n, p, tmp, ini, end;
    vector<int> prices;
    cin >> T;
    
    for (int caseN = 1; caseN <= T; caseN++) {
        cout << "Case #" << caseN << ": ";
        cin >> n >> p;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            prices.push_back(tmp);
        }
        res = sum = 0;
        ini = end = 0;
        while (end < n) {
            sum += prices[end];
            if (sum <= p)
                res += end-ini+1;
            else {
                while (sum > p && ini <= end) {
                    sum -= prices[ini];
                    ini++;
                }
                if (ini <= end) {
                    sum -= prices[end];
                    end--;
                }
                    
            }
            end++;
        }
        cout << res << endl;
    }
    return 0;
}
