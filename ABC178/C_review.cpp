#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;
const ll MOD=1e9+7;

ll powmod(ll x,ll y){
	ll pow=x;

	if(y==0) return 1;
	for(int i=1;i<y;i++){
		pow*=x;
		pow%=MOD;
	}

	return pow%MOD;
}


int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int i,k;
	ll N;
	ll ans=0;

	cin >> N;

	if(N==1)
		ans=0;
	if(N==2)
		ans=2;
	else
		ans=((N*(N-1))%MOD) * powmod(10,N-2);
	

	ll correct=powmod(10,N)-powmod(9,N)-powmod(9,N)+powmod(8,N);
	correct%=MOD;
	ans%=MOD;
	cout << ans << endl;
	cout << correct << endl;

	return 0;
}

