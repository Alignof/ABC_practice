#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;
const ll MOD=998244353;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,K;
	int i,k;
	ll ans=0;
	ll ctr=0;
	vector<int> S;

	cin >> N >> K;

	int x,y;
	rep(i,K){
		cin >> x >> y;
		for(k=x;k<=y;k++) S.emplace_back(k);
	}

	sort(S.begin(),S.end());
	S.erase(unique(S.begin(),S.end()),S.end());

	for(auto& x:S) cout << x << endl;
	
	ans=0;
	cout << ans << endl;

	return 0;
}

