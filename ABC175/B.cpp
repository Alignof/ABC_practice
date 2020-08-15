#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll N;
	ll i,k,l;
	ll ans=0;
	ll ctr=0;

	cin >> N;

	vector<ll> gv(N);
	rep(i,N) cin >> gv[i];

	for(i=0;i<N-2;i++){
		for(k=i+1;k<N-1;k++){
			for(l=k+1;l<N;l++){
				//if((gv[i]*gv[i])==(gv[k]*gv[k])+(gv[l]*gv[l])){
				if(gv[i]+gv[k]>gv[l] && gv[k]+gv[l]>gv[i] && gv[l]+gv[i]>gv[k] && gv[i]!=gv[k] && gv[k]!=gv[l] && gv[i]!=gv[l]){
					ctr++;
					/*
					cout << "---" << endl;
					cout << gv[i] << " " << gv[k] << " " << gv[l] << " " << endl;
					cout << i+1 << " " << k+1 << " " << l+1 << " " << endl;
					*/
				}
			}
		}
	}

	ans=ctr;
	cout << ans << endl;

	return 0;
}

