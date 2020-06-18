#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int i,j;
	int tmp;
	ll N,K;
	ll answer=0;

	cin >> N >> K;

	if(N>K)
		answer=min(N%K,abs(N-(K*(N/K +1))));
	else
		answer=min(N,K-N);
	
	cout << answer << endl;

	return 0;
}

