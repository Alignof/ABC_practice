#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int i,j;
	int answer=0;
	ll N;
	ll money=100;
	ll counter=0;
	vector<int> given;

	cin >> N;

	while(money<N){
		//cout << std::fixed << std::setprecision(15) << money << endl;
		money=(ll)(money*1.01);

		counter++;
	}
	
	cout << counter << endl;

	return 0;
}

