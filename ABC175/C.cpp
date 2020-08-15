#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll X,K,D;
	ll i,k;
	ll ans=0;
	ll ctr=0;

	cin >> X >> K >> D;

	X=abs(X);
	ctr=K;

	if(X/D <= K){
		ctr-=(X/D);
		X-=D*(X/D);
	}else{
		X-=D*K;
		ctr=0;
	}

	//cout << X << " " << ctr << endl;

	if(abs(X)>abs(X+D)){
		X+=D;
		ctr++;
	}

	//cout << X << " " << ctr << endl;

	if(ctr>0){
		if(X<=0 && ctr%2) X+=D;
		else if(X>0 && ctr%2) X-=D;
	}
	cout << abs(X) << endl;

	return 0;
}

