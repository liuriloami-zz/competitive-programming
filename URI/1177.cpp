#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 1000; i++)
        printf("N[%d] = %d\n", i, i%n);
    return 0;
}
