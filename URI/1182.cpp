#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    double n;
    int line, sum=0;
    string op;
    cin >> line >> op;
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++) {
            cin >> n;
            if (j == line)
                sum += n;
        }
    if (op == "S")
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum/12.0);
    return 0;
}
