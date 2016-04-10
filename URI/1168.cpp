#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
    int tests, sum;
    string num;
    cin >> tests;
    while (tests--) {
        cin >> num;
        sum = 0;
        for (int i = 0; i < num.size(); i++)
            switch (num[i]) {
                case '0': case '6': case '9':
                    sum += 6;
                    break;
                case '1':
                    sum += 2;
                    break;
                case '2': case '3': case '5':
                    sum += 5;
                    break;
                case '4':
                    sum += 4;
                    break;
                case '7':
                    sum += 3;
                    break;
                case '8':
                    sum += 7;
                    break;
            }
            cout << sum << " leds" << endl;
    }
    return 0;
}
