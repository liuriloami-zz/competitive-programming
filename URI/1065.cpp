#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n, count = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n % 2 == 0)
            count++;
    }
    printf("%d valores pares\n", count);
    return 0;
}
