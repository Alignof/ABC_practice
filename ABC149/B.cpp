#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll A,B,K;
	ll prime[100000]={};
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> A >> B >> K;

	A=A-K;
	if(A<0) B=B-abs(A);

	if(A<0) A=0;
	if(B<0) B=0;

	cout << A << " " << B << endl;

	return 0;
}

