#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,D;
	ll x,y;
	int i,k;
	ll ans=0;
	int ctr=0;

	cin >> N >> D;

	rep(i,N){
		cin >> x >> y;
		if(sqrt(x*x+y*y)<=D) ans++;
	}

	cout << ans << endl;

	return 0;
}

