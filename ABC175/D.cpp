#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll N,K;
	ll i,k;
	ll ans=0;
	ll ctr=0;

	/*   2  4  5  1  3
	 * +--+--+--+--+--+
	 * | 3| 4|-5|-8| 8|
	 * +--+--+--+--+--+
	 *   1  2  3  4  5
	 */

	cin >> N >> K;

	vector<ll> P(N+1);
	vector<ll> C(N+1);
	P[0]=-1;
	C[0]=-1;
	for(i=1;i<N+1;i++) cin >> P[i];
	for(i=1;i<N+1;i++) cin >> C[i];


	//sort(gv.begin(),gv.end());
	//sort(gv.begin(),gv.end(),greater<int>());
	
	ans=0;
	cout << ans << endl;

	return 0;
}

