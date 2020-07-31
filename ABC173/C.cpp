#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int H,W,K;
	int i,k;
	int ans=0;
	int ctr=0;

	cin >> H >> W >> K;

	vector<vector<char>> gv(H,vector<char>(W,0));

	rep(y,H)rep(x,W){
		cin >> gv[y][x];
	}

	for(int bitx=0;bitx<(1<<W);bitx++){
		for(int bity=0;bity<(1<<H);bity++){
			ctr=0;
			for(int x=0;x<W;x++){
				if(bitx>>x & 1) continue;
				for(int y=0;y<H;y++){
					if(bity>>y & 1) continue;
					if(gv[y][x]=='#') ctr++;
				}
			}
			if(ctr==K) ans++;
		}
	}

	cout << ans << endl;

	return 0;
}

