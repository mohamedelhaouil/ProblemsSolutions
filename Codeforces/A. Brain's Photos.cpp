/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;


int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n, m, cnt = 0;
	cin >> n >> m;
	char mat[100][100];
	for (int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> mat[i][j];
			if(mat[i][j] != 'W' && mat[i][j] != 'B' && mat[i][j] != 'G')
				cnt++;
		}
	}
	if(cnt)
		cout <<"#Color";
	else
		cout <<"#Black&White";
	return 0;
}

