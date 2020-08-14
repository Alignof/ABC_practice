#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
#define MAX 1000000000
using namespace std;
using ll = long long;

ll digit(ll N){
	ll d=1;
	while(pow(10,d)<=N) d++;
	return d;
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int i,k;
	ll A,B,X;
	ll N=0;
	ll price=0;

	cin >> A >> B >> X;

	if(A+B>X){
		cout << 0 << endl;
		return 0;
	}

	N=((X/A)<(MAX)?(X/A):MAX);
	while(1){
		price=A*N + B*digit(N);
		//cout << N << " " << digit(N) << " " << price << endl;
		if(price<=X) break;
		if((A*(N/10) + B*digit(N/10)) > X) N/=10;

		N--;
	}
	
	if(N>MAX)
		cout << MAX << endl;
	else if(N<0)
		cout << 0 << endl;
	else
		cout << N << endl;

	return 0;
}
