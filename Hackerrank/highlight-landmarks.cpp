#include <bits/stdc++.h>

using namespace std;

int main(){
    string d;
    int l;
    map<string, int> n;
    
    getline(cin, d);
    cin >> l;
    for (int i = 0; i < l; i++) {
        string word;
        cin >> word;
        n[word] = 1;
    }
    
    stringstream ss(d);
    string word;
    bool first = true;
    while (ss >> word) {
        if (!first) cout << " ";
        first = false;
        if (n[word]) {
            cout << "<b>" << word << "</b>";
        } else {
            cout << word;
        }
    }
    cout << endl;
    return 0;
}
