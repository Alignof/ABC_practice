#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll N;
	int i,j;
	int tmp;
	int counter=0;
	ll answer=0;
	vector<int> given;

	cin >> N;

	
	answer=N + N*N + N*N*N ;
	cout << answer << endl;

	return 0;
}

