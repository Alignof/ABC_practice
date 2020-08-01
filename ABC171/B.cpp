#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,K;
	int i,j;
	int tmp;
	int answer=0;
	int counter=0;
	vector<int> given;

	cin >> N >> K;

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	sort(given.begin(),given.end());
	
	for(i=0;i<K;i++)
		answer+=given[i];

	cout << answer << endl;

	return 0;
}

