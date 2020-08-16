#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int K,X;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> K >> X;

	if(500*K>=X){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}
	return 0;
}

