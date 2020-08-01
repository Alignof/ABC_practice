#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string S,T;
	int N;
	int tmp;
	ll i,j;
	ll answer=0;
	ll counter=0;
	vector<int> given;

	cin >> S >> T;

	N=S.size();
	for(i=0;i<N;i++){
		if(S[i]!=T[i]) counter++;
	}


	answer=counter;
	cout << answer << endl;

	return 0;
}

