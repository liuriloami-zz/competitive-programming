#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int x, y, sum = 0;
    scanf("%d %d", &x, &y);
    for (int i = min(x,y); i <= max(x,y); i++)
        if (i%13 != 0) sum += i;
    printf("%d\n", sum);
    return 0;
}
