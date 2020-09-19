#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,x,y;
	int k,l;
	int ans=0;
	int ctr=0;
	vector<ll> starts(1e3,0);
	vector<vector<ll>> table(1e3,vector<ll>(1e3));

	for(y=1;y<=1e3;y++)
		for(x=1;x<=1e3;x++)
			table[y-1][x-1]=x*y;

	cin >> N;

	for(int i=1;i<N;i++){
		for(y=0;y<1e3;y++){
			for(x=starts[y];x<1e3;x++){
				if(table[y][x] > i) break;

				if(table[y][x] == i){
					ans++;
					starts[y]=x+1;
				}
			}
		}
	}


	cout << ans << endl;

	return 0;
}


