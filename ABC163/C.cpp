#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	int tmp;
	int answer=0;
	int counter=0;
	vector<int> given;

	cin >> N;
	int subordinate[N]={0};

	for(i=0;i<N-1;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	for(i=0;i<N;i++){
		subordinate[given[i]-1]++;
	}

	for(i=0;i<N;i++){
		cout << subordinate[i] << endl;
	}

	return 0;
}

