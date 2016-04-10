#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, in, res=0, minOdd=-1;
    vector<long long int> odds;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> in;
        if (in%2 == 0) 
            res += in;
        else {
            res += in;
            if (minOdd == -1 || minOdd > in)
                minOdd = in;
        }
    }
    if (res%2 == 1) res -= minOdd;
    cout << res << endl;
    return 0;
}
