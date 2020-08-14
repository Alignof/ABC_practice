#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
#define MAX 1e9
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
	ll left,right,mid;
	ll N=0;
	ll price=0;

	cin >> A >> B >> X;
	
	left=0;
	right=MAX+1;

	while(right-left>1){
		mid=(left+right)/2;
		price=A*mid + B*digit(mid);

		if(price<=X) left=mid;
		else right=mid;
	}

	cout << left << endl;

	return 0;
}
