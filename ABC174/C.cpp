#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int K;
	int mod;
	int ans=1;
	set<int> s;

	cin >> K;
	mod=7%K;
	while(s.count(mod)==0){
		if(mod==0){
			cout << ans << endl;
			return 0;
		}

		s.insert(mod);
		mod=(mod*10+7)%K;
		ans++;
	}

	cout << -1 << endl;

	return 0;
}

