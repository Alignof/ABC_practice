#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;


int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	ll i,x,y;
	int k,l;
	int ans=0;
	int ctr=0;

	cin >> N;
	for(i=1;i<1e6;i++){
		for(k=1;k<1e6;k++){
			if(i*k > N-1) break;
			if(i*k <= N-1) ans++;
		}
	}



	cout << ans << endl;

	return 0;
}

