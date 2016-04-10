#include <bits/stdc++.h>
using namespace std;

int main (int argc, char** argv) {
    int T, n, x, y, res;
    vector<pair<int,int> > stars;
    map<int, map<double, int> > dists;
      
    cin >> T;
    for (int caseN = 1; caseN <= T; caseN++) {
        cout << "Case #" << caseN << " : ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            for (int j = 0; j < i; j++) {
                double hyp = hypot(abs(x-stars[j].first), abs(y-stars[j].second));
                dists[i][hyp]++;
                dists[j][hyp]++;
            }
            stars.push_back(pair<int,int>(x,y));
        }
        res = 0;
        for (map<int,map<double,int> >::iterator it = dists.begin(); it != dists.end(); it++) {
            map<double,int> d = it->second;
            for (map<double,int>::iterator it2 = d.begin(); it2 != d.end(); it2++) { 
                int v = it2->second;
                if (v >= 2)
                    res += v * (v-1);
            }
        }
        cout << res/2 << endl;
    }
    return 0;
}
