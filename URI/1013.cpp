#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int a, b, c;
    cin >> a >> b >> c;
    printf("%d eh o maior\n", max(a,max(b,c)));
    return 0;
}
