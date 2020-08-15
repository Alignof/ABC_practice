#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,K,M;
	int i,k;
	double sum=0;
	double ans=0;
	double ave=0;

	cin >> N >> K >> M;

	vector<double> gv(N);
	rep(i,N-1) cin >> gv[i];

	rep(i,N-1) sum+=gv[i];

	ans=N*M-sum;

	if(ans<0)
		cout << 0 << endl;
	else if(ans<=K)
		cout << ans << endl;
	else
		cout << -1 << endl;

	return 0;
}

