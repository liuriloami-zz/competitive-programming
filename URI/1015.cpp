#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double x1, x2, y1, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    printf("%.4f\n",hypot(abs(x2-x1), abs(y2-y1)));
    return 0;
}
