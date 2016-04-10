#include <bits/stdc++.h>
using namespace std;

int main (int argc, char** argv) {
    int n;
    string questions;
    
    cin >> n >> questions;
    
    if (n <= 3) cout << n << endl;
    else {
        int countRep = 0;
        for (int i = 1; i < n; i++)
            if (questions[i] == questions[i-1]) 
                countRep++;
                
        int countSeq = 1;
        char last = questions[0];
        for (int i = 1; i < n; i++)
            if (questions[i] != last) {
                last = questions[i];
                countSeq++;
            }
        cout << countSeq + min(2, countRep) << endl;
    }
    return 0;
}
