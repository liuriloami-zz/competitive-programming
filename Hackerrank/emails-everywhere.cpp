#include <bits/stdc++.h>
using namespace std;

int main (int argc, char** argv) {
    int n;
    queue<string> emails[10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "get_next_email") {
            for (int i = 9; i >= 0; i--) {
                if (emails[i].size() > 0) {
                    cout << emails[i].front() << endl;
                    emails[i].pop();
                    break;
                }
                if (i == 0) {
                    cout << -1 << endl;
                }
            }
        } else {
            string content;
            int urgency;
            cin >> content >> urgency;
            emails[urgency-1].push(content);
        }
    }
}