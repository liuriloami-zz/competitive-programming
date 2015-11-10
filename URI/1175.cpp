#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n[20];
    for (int i = 0; i < 20; i++)
        scanf("%d", &n[i]);
    for (int i = 0; i < 10; i++) {
        int tmp = n[i];
        n[i] = n[19-i];
        n[19-i] = tmp;
    }
    for (int i = 0; i < 20; i++)
        printf("N[%d] = %d\n", i, n[i]);
    return 0;
}
