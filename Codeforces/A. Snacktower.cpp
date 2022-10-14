/**
 *
 *    author:  MEL05
 *
**/
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 100002;
bool s[N];
int main () {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int top = n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		s[x] =  true;
		while(s[top]){
			cout << top << " ";
			top--;
		}
		if(i != n - 1)
			cout << endl;
	}

	return 0;
}






