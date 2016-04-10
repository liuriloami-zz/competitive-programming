#include <bits/stdc++.h>
using namespace std;

int main (int argc, char** argv) {
    double  m[5], w[5], x[5], hs, hu;
    double score = 0;
    
    for (int i = 0; i < 5; i++) cin >> m[i];
    for (int i = 0; i < 5; i++) cin >> w[i];
    for (int i = 0; i < 5; i++) x[i] = 500 * (i+1);
    cin >> hs >> hu;
    
    for (int i = 0; i < 5; i++)
        score += max(0.3 * x[i],(1.0 - m[i]/250.0) * x[i] - 50.0 * w[i]);
    score += 100*hs;
    score -= 50*hu;
    
    cout << score << endl;
    
    return 0;
}
