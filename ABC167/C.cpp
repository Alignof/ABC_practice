#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,M,X;
	int i,j;
	int bit;
	int tmp;
	int answer=100001;
	bool flag;
	ll max=0;
	vector<int> sum;
	vector<vector<int>> given;


	cin >> N >> M >> X;
	sum.resize(M+1);

	for(i=0;i<N;i++){
		given.emplace_back();
		for(j=0;j<M+1;j++){
			cin >> tmp;
			if(j==0) max+=tmp;
			given[i].emplace_back(tmp);
		}
	}

	max++;
	answer=max;

	// start at 1
	for(bit=1;bit<(1<<N);bit++){
		flag=true;
		fill(sum.begin(),sum.end(),0);

		for(i=0;i<N;i++){
			if(bit&(1<<i)){
				transform(sum.begin(),sum.end(), given[i].begin(),sum.begin(),plus<int>());
			}
		}

		for(i=1;i<M+1;i++)
			if(sum[i]<X) flag=false; 

		if(flag && sum[0]<answer) answer=sum[0];
	}

	if(answer==max) cout << -1 << endl;
	else cout << answer << endl;

	return 0;
}

