#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,K;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> N >> K;

	while(N!=0){
		N/=K;
		counter++;
	}
	
	answer=counter;
	cout << answer << endl;

	return 0;
}

