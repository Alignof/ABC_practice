#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll a,b,c,d,e,f;
	int i,k;
	ll ans=-1e18;
	int ctr=0;
	vector<ll> gv(10);

	cin >> a >> b >> c >> d;

	gv[0]=a*c;
	gv[1]=a*d;
	gv[2]=b*c;
	gv[3]=b*d;

	rep(i,4){
		ans=max(ans,gv[i]);
	}
	cout << ans << endl;

	return 0;
}

