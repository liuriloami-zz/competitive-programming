#include <bits/stdc++.h>
using namespace std;

int main (int argc, char** argv) {
    int T, n, res;
    char grid[2][1001];
    bool val;
    
    cin >> T;
    for (int caseN = 1; caseN <= T; caseN++) {
        cin >> n;
        cin >> grid[0] >> grid[1];
        cout << "Case #" << caseN << ": ";
        
        val = true;
        res = 0;
        if (n == 1)
            if (grid[0][0] == 'X' && grid[1][0] == 'X')
                cout << 0 << endl;
            else
                cout << 1 << endl;
        
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < n; j++)
                if (grid[i][j] == '.' && grid[(i+1)%2][j] == '.')
                    if ( (j == 0 && grid[i][j+1] == 'X') ||
                         (j == n-1 && grid[i][j-1] == 'X') || 
                         (grid[i][j-1] == 'X' && grid[i][j+1] == 'X')) {
                        res++;
                        grid[i][j] = grid[(i+1)%2][j] = 'O';
                        for (int k = j-1; k >= 0 && grid[(i+1)%2][k] != 'X'; k--)
                            grid[(i+1)%2][k] = 'O';
                        for (int k = j+1; k < n && grid[(i+1)%2][k] != 'X'; k++)
                            grid[(i+1)%2][k] = 'O';
                    }
            
        while (val) {
            val = false;
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < n; j++)
                    if (grid[i][j] == '.') {
                        val = true;
                        res++;
                        grid[i][j] = grid[(i+1)%2][j] = 'O';
                        for (int k = j-1; k >= 0 && grid[i][k] != 'X'; k--)
                            grid[i][k] = 'O';
                        for (int k = j+1; k < n && grid[i][k] != 'X'; k++)
                            grid[i][k] = 'O';
                    }
        }
        cout << res << endl;
    }
    return 0;
}
