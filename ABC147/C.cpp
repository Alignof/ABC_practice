#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

struct testimony{
	int x,y;
};


int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,A;
	int i,j;
	int x,y;
	int answer;
	int counter=0;
	double ave;
	testimony tmp;
	vector< vector<testimony> > given;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> A;
		given.push_back(vector<testimony>());
		for(j=0;j<A;j++){
			cin >> x >> y;
			given[i].push_back((testimony){x,y});
		}
	}

	for(i=0;i<N;i++){
		cout << i << endl;
		for(j=0;j<given[i].size();j++){
			cout << given[i][j].x << " " << given[i][j].y <<endl;
		}
	}

	//sort(given.begin(),given.end());
	//sort(given.begin(),given.end(),greater<int>());

/*
	answer=;
	cout << answer << endl;
*/
	return 0;
}

