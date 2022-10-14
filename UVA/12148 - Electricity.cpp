/**
 *
 *    author:  MEL05
 *
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dm[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool consdays(int d, int m, int y, int pd, int pm, int py) {
	if (--d == 0) { 
		if (--m == 0) {
	        	--y;
	       		m=12;
	   	}
        	d = dm[m];
		bool isleapyear = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
		if (m == 2 && isleapyear)
			d = 29;
	}
	return d == pd && m == pm && y == py;
}

int main () {
	ios_base :: sync_with_stdio(false);
	int n;
	while (cin >> n && n) {
		int sum = 0, count = 0;
		int pd = 0, pm = 0, py = 0, pc = 0;
		while (n--) {
			int d, m, y, c;
			cin >> d >> m >> y >> c;
			if (consdays(d, m, y, pd, pm, py)) {
				sum += (c - pc) ;
				count++;
			}
			pd = d, pm = m, py = y, pc = c;
		}
		cout << count << " " << sum << endl;
	}
	return 0;
}
