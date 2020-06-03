#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,M;
	int min,max;
	int i,j;
	int tower;
	bool flag;
	int answer=0;
	int counter=0;
	ll tmp;
	vector<ll> H;
	vector<pair<int,int>> road;

	cin >> N >> M;

	for(i=0;i<N;i++){
		cin >> tmp;
		H.push_back(tmp);
	}

	for(i=0;i<M;i++){
		cin >> min;
		cin >> max;

		if(max<min) swap(min,max);
		road.emplace_back(min,max);
	}


	for(i=0;i<N;i++){
		tower=i+1;
		flag=true;
		for(j=0;j<M;j++){
			if(road[j].first==tower && H[tower-1] <=H[road[j].second-1])   flag=false;
			if(road[j].second==tower && H[tower-1]<=H[road[j].first -1]) flag=false;
		}
		
		if(flag) counter++;
	}

	answer=counter;
	cout << answer << endl;

	return 0;
}

