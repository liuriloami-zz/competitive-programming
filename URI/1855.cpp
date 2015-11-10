#include <bits/stdc++.h>
using namespace std;
 
int main (int argc, char** argv) {
	int c, l;
  	cin >> c >> l;
  	string mapa[l];
  	for (int i = 0; i < l; i++)
    	cin >> mapa[i];
  	int posx = 0;
  	int posy = 0;
  	int dir = 0; //1 top, 2 dir, 3 down, 4 left
  	while (1) {
    	if (posx < 0 || posx == c || posy < 0 || posy == l) {
    		cout << "!" << endl;
      		return 0;
		}
    	switch (mapa[posy][posx]) {
      		case '.':
        		if (dir == 0) {
          			cout << "!" << endl;
          			return 0;
        		}
        		if (dir == 1)
          			posy--;
				if (dir == 2)
				  	posx++;
				if (dir == 3)
				  	posy++;
				if (dir == 4)
				  	posx--;
				break;
      		case '*':
        		cout << "*" << endl;
				return 0;
				break;
      		case '!':
				cout << "!" << endl;
				return 0;
				break;
		  	default:
				if (mapa[posy][posx] == '>') {
				  	mapa[posy][posx] = '!';
				  	posx++;
				  	dir = 2;
				} else if (mapa[posy][posx] == '^') {
				  	mapa[posy][posx] = '!';
				  	posy--;
				  	dir = 1;
				} else if (mapa[posy][posx] == 'v') {
				  	mapa[posy][posx] = '!';
				  	posy++;
				  	dir = 3;
				} else {
				  	mapa[posy][posx] = '!';
				  	posx--;
				  	dir = 4;
				}
				break;
		}
  	}
  	return 0;
}
