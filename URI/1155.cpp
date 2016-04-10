#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double res=0;
    for (int i = 1; i <= 100; i++)
        res += 1.0/i;
    printf("%.2lf\n", res);
    return 0;
}
