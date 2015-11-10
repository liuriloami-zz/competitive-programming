#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double res=0;
    for (int i = 0; i <= 19; i++)
        res += (1.0+2.0*i)/pow(2,i);
    printf("%.2lf\n", res);
    return 0;
}
