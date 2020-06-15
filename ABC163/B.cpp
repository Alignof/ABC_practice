#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,M;
	int i,j;
	int tmp;
	int answer=0;
	int counter=0;
	vector<int> given;

	cin >> N >> M;

	for(i=0;i<M;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	answer=N;
	for(i=0;i<M;i++){
		answer-=given[i];
	}

	if(answer<0){
		cout << "-1" << endl;
		return 0;
	}

	cout << answer << endl;

	return 0;
}

