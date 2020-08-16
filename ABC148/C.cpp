#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

ll euclidean_gcd(ll a, ll b) {
	while(1) {
		if(a < b) swap(a, b);
		if(!b) break;
		a %= b;
	}
	return a;
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll A,B;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> A >> B;

	cout << (A*B)/euclidean_gcd(A,B) << endl;
	
	return 0;
}

