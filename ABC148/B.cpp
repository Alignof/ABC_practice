#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	vector<int> given;
	string S,T;

	cin >> N;
	cin >> S >> T;

	for(i=0;i<S.size();i++){
		cout << S[i];
		cout << T[i];
	}

	cout << endl;

	return 0;
}
