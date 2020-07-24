#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int A,B;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	vector<int> given;
	string S,T,U;

	cin >> S >> T;
	cin >> A >> B;
	cin >> U;

	if(U==S) A--;
	if(U==T) B--;

	cout << A << " " << B << endl;

	return 0;
}

