#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n=0, sum=0, age;
    while (scanf("%d", &age) && age > 0) {
        n++;
        sum += age;
    }
    printf("%.2lf\n", (double)sum / n);
    return 0;
}
