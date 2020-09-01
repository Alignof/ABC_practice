#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string S,T;
	int i,j;
	int counter=0;
	int tmp;
	double ave;
	vector<int> given;

	cin >> S >> T;

	for(i=0;i<3;i++){
		if(S[i]==T[i]){
			counter++;
		}
	}

	cout << counter << endl;

	return 0;
}

