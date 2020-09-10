#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int x,y;
	int N,M;
	int i,k;
	int ans=0;
	int ctr=0;

	cin >> N >> M;

	vector<set<int>> fri(N+1);

	rep(i,M){
		cin >> x >> y;
		fri[x].insert(y);
		fri[y].insert(x);
	}

	for(auto& s:fri){
		//cout << s.size() << endl;
		if(ans<s.size()) ans=s.size();
	}
	
	ans++;
	cout << ans << endl;

	return 0;
}

