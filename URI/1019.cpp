#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int time;
    scanf("%d", &time);
    printf("%d:%d:%d\n", time/3600, (time%3600)/60, time%60);
    return 0;
}
