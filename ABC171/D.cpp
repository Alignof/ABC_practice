#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,Q;
	int i,j;
	int counter=0;
	ll tmp;
	ll before,after;
	ll answer=0;
	ll maximum=0;
	vector<ll> data(100000+10);
	vector<pair<ll,ll>> given;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		data[tmp]++;
		answer+=tmp;
	}

	cin >> Q;

	for(i=0;i<Q;i++){
		cin >> before >> after;

		answer+=(after-before)*data[before];
		data[after]+=data[before];
		data[before]=0;
	
		cout << answer << endl;
	}

	return 0;
}

