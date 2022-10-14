/**
 *
 *    author:  MEL05
 *
**/
#include <bits/stdc++.h>

using namespace std;

#define all(v)  ((v).begin()),((v).end())

long long div(long long d){
	for (long long i = 2; i * i <= d; i++){
		if(d % (i * i) == 0){
			d /= i;
			i--;	
		}
	}
	return d;
}

int main() {
	long long n, m;
	cin >> n;
	m = div(n);
	cout << m;
	return 0;
}
