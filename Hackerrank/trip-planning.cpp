#include <bits/stdc++.h>
using namespace std;

const int MAX_PRICE = 30;
const int MAX_ATTR  = 1001;
const int MAX_DAYS  = 4;
const int MAX_HOURS = 8;
const int MAX_COST = MAX_PRICE * MAX_DAYS * MAX_HOURS;

int dp[2][MAX_COST + 1][495];
int pos[9][9][9][9];

int main(int argc, char** argv) {
    
    int index = 0;
    for (int d1 = 0; d1 <= 8; d1++) {
        for (int d2 = 0; d2 <= d1; d2++) {
            for (int d3 = 0; d3 <= d2; d3++) {
                for (int d4 = 0; d4 <= d3; d4++) {
                    pos[d1][d2][d3][d4] = index++;
                }
            }
        }
    }

	int budget, nightPrice, nAttr;
	cin >> budget >> nightPrice >> nAttr;

	for (int a = 1; a <= nAttr; a++) {
        string name;
        int cost, duration, score;
		cin >> name >> cost >> duration >> score;

        for (int b = 0; b <= MAX_COST; b++) { 
            for (int d1 = 0; d1 <= MAX_HOURS; d1++) {
                for (int d2 = 0; d2 <= d1; d2++) {
                    for (int d3 = 0; d3 <= d2; d3++) {
                        for (int d4 = 0; d4 <= d3; d4++) {
                            if (b < cost || d1 < duration) {
                                dp[1][b][pos[d1][d2][d3][d4]] = dp[0][b][pos[d1][d2][d3][d4]];
                                continue;
                            }
                            int prev = 0;
                            if (a > 1 && b >= cost) {
                                if (d1 > duration) {
                                    prev = dp[0][b-cost][pos[d1-duration][d2][d3][d4]];
                                }
                                if (d2 >= duration) {
                                    prev = max(prev, dp[0][b-cost][pos[d1][d2-duration][d3][d4]]);
                                }
                                if (d3 >= duration) {
                                    prev = max(prev, dp[0][b-cost][pos[d1][d2][d3-duration][d4]]);
                                }
                                if (d4 >= duration) {
                                    prev = max(prev, dp[0][b-cost][pos[d1][d2][d3][d4-duration]]);
                                }
                            }
                            dp[1][b][pos[d1][d2][d3][d4]] = max(dp[0][b][pos[d1][d2][d3][d4]], prev + score);
                        }
                    }
                }
            }
        }

        memcpy(&dp[0], &dp[1], (MAX_COST + 1) * 495 * sizeof(int));
    }

    int maxScore = 0, nights = 0;

    for (int n = 1; n <= 4; n++) {
        
        int attrBudget = budget - n*nightPrice;
        if (attrBudget < 0) continue;
        
        int nightScore = dp[1][min(attrBudget, MAX_COST)][pos[8][( n > 1 ? 8 : 0)][( n > 2 ? 8 : 0)][( n > 3 ? 8 : 0)]];
        if (nightScore > maxScore) {
            maxScore = nightScore;
            nights = n;
        }
    }

    cout << maxScore << endl;

	return 0;
}