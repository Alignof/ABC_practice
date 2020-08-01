#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,M;
	ll r,l;
	ll K;
	ll ans=0;
	ll sum=0;

	cin >> N >> M >> K;
	vector<ll> A(N+1);
	vector<ll> B(M+1);
	rep(i,N) cin >> A[i+1];
	rep(i,M) cin >> B[i+1];


	for(l=0;sum+B[l]<=K && l<M+1;l++)
		sum+=B[l];
	l--;

	for(r=0;r<N+1;r++){
		sum+=A[r];
		while(sum>K && l>0){
			sum-=B[l];
			l--;
		}

		if(sum>K) break;
		ans=max(ans,r+l);
	}

	cout << ans << endl;
	return 0;
}

