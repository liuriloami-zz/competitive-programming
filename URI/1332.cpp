#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        if (word.size() == 5)
            cout << 3 << endl;
        else {
            int right=0;
            if (word[0] == 't') right++;
            if (word[1] == 'w') right++;
            if (word[2] == 'o') right++;
            if (right >= 2)
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
    }
    return 0;
}
