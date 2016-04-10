#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d %d %d\n", i, i*i, i*i*i);
    return 0;
}
