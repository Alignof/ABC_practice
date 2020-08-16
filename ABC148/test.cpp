#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef unsigned long long ll;

ll Double_Factorial(ll n){
	if(n<2) return 1;
	return n*Double_Factorial(n-2);
}
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll N;
	ll two=1;
	ll five=0;
	int answer;
	int tmp;
	int counter=0;
	double ave;
	vector<int> given;

	//cin >> N;
	
	N=30;
	cout << Double_Factorial(N) << endl;

	return 0;
}

