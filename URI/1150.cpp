#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int x, z, sum=0, count=0;
    scanf("%d %d", &x, &z);
    while (z <= x)
        scanf("%d", &z);
    while (sum <= z) {
        sum += x++;
        count++;
    }
    printf("%d\n", count);
}
