#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int K;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	string S;
	vector<int> given;

	cin >> K >> S;

	if(K<S.size()){
		for(i=0;i<K;i++){
			cout << S[i];
		}
		cout << "..." << endl;
	}else{
		cout << S << endl;
	}

	return 0;
}

