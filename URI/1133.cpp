#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int x, y;
    scanf("%d %d", &x, &y);
    for (int i = min(x,y)+1; i < max(x,y); i++)
        if (i%5 == 2 || i%5 == 3)
            printf("%d\n", i);
    return 0;
}
