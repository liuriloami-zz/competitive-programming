#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    string name;
    double dist, sum=0;
    int count=0;
    while (getline(cin, name)) {
        cin >> dist;
        sum += dist;
        count++;
        cin.ignore();
    }
    printf("%.1lf\n", sum/count);
    return 0;
}
