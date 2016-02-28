#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, l, r;
    double sum=0;
    vector<double> shark;
    
    cin >> n >> p;
    
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        int l1 = l + (p - l%p)%p;
        int r1 = r - r%p;
        
        if (l1 <= r && r1 >= l) {
            double count = (r1-l1)/p + 1;
            double total = (r-l+1);
            shark.push_back(count/total);
        } else 
            shark.push_back(0);
    }
    
    for (int i = 0; i < n; i++) {
        double cur = shark[i];
        
        double vis = shark[(i+1)%n];
        double expi = cur*(1-vis) + cur*vis + (1-cur)*vis;
        
        sum += expi*1000;
    }
    
    printf("%lf\n", sum*2);

    
    return 0;
}

