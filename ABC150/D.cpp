#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

unsigned euclidean_gcd(unsigned a, unsigned b) {
	while(1) {
		if(a < b) swap(a, b);
		if(!b) break;
		a %= b;
	}
	return a;
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,M;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> N >> M;

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	tmp=given[0];
	for(i=0;i<N;i++){
		tmp=(tmp*given[i+1])/euclidean_gcd(tmp,given[i+1]);
	}
	cout << tmp << endl;

	answer=(M-(tmp/2))/tmp;
	cout << answer << endl;

	return 0;
}

