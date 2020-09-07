#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

const int dx[4]={0,1,0,-1};
const int dy[4]={1,0,-1,0};

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int H,W;
	int ch,cw;
	int dh,dw;
	int i,k;
	char tmp;
	const int INF=1e9;
	deque<pair<int,int>> deq;

	cin >> H >> W;
	cin >> ch >> cw;
	cin >> dh >> dw;
	ch--; cw--;
	dh--; dw--;

	vector<vector<int>> gv(H,vector<int>(W,0));
	vector<vector<int>> warp(H,vector<int>(W,INF));

	rep(i,H){
		rep(k,W){
			cin >> tmp;
			if(tmp=='#') gv[i][k]=1;
		}
	}

	deq.emplace_back(cw,ch);
	warp[ch][cw]=0;
	while(!deq.empty()){
		pair<int,int> data=deq.front();
		deq.pop_front();
		int x=data.first;
		int y=data.second;

		// normal move
		rep(dir,4){
			int ix=x+dx[dir];
			int iy=y+dy[dir];

			if(!(0<=ix && ix<W && 0<=iy && iy<H)) continue;
			if(gv[iy][ix]==1) continue;
			if(warp[iy][ix]<=warp[y][x]) continue;

			warp[iy][ix]=warp[y][x];
			deq.emplace_front(ix,iy);
		}

		// warp
		for(int dxx=-2;dxx<=2;dxx++){
			for(int dyy=-2;dyy<=2;dyy++){
				int ix=x+dxx;
				int iy=y+dyy;
				if(!(0<=ix && ix<W && 0<=iy && iy<H)) continue;
				if(gv[iy][ix]==1) continue;
				if(warp[iy][ix]<=warp[y][x]) continue;

				warp[iy][ix]=warp[y][x]+1;
				deq.emplace_back(ix,iy);
			}
		}
	}


	if(warp[dh][dw]==INF)
		cout << -1 << endl;
	else
		cout << warp[dh][dw] << endl;

	return 0;
}

