#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll N;
	ll i,k;
	ll ans=0;
	ll ctr=0;

	cin >> N;

	vector<ll> gv(N);
	rep(i,N) cin >> gv[i];

	for(i=1;i<N;i++){
		if(gv[i-1]>gv[i]){
			ans+=gv[i-1]-gv[i];
			gv[i]+=gv[i-1]-gv[i];
		}
	}
	
	cout << ans << endl;

	return 0;
}

