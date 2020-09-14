#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;
const ll MOD=1e9+7;

ll powmod(ll x,ll y){
	ll pow=1;

	for(ll i=0;i<y;i++){
		pow*=x;
		pow%=MOD;
	}

	return pow;
}


int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll N;
	ll ans=0;

	cin >> N;

	if(N==1)
		ans=0;
	if(N==2)
		ans=2;
	else
		ans=powmod(10,N)-powmod(9,N)-powmod(9,N)+powmod(8,N);

	ans%=MOD;
	ans=(ans+MOD)%MOD;
	
	cout << ans << endl;

	return 0;
}

