#include <bits/stdc++.h>
using namespace std;

string pattern[2];
vector<pair<string, string> > rules;

string r1, r2;

map<char, int> colors;

void countColors() {
    for (int i = pattern[0].size()/3; i < 2*pattern[0].size()/3; i++) {
        colors[pattern[0][i]]++;
    }
}

void processRules() {
    pattern[1] = pattern[0];
    for (int i = 0; i < rules.size(); i++) {
        size_t pos = pattern[0].find(rules[i].first, 0);
        while(pos != string::npos) {
            int middle = rules[i].first.size()/2;
            pattern[1][pos + middle] = rules[i].second[0];
            pos = pattern[0].find(rules[i].first, pos+1);
        }
    }
    pattern[0] = pattern[1];
}

int main() {
    cin >> pattern[0];

    //Circular fix
    pattern[0] = pattern[0] + pattern[0] + pattern[0];

    while (cin >> r1 >> r2) {
        rules.push_back(pair<string, string>(r1, r2));
    }
    for (int i = 0; i < 10000; i++) {
        countColors();
        processRules();
    }

    for (map<char, int>::iterator it = colors.begin(); it != colors.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
