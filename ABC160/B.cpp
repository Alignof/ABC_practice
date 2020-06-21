#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int i,j;
	int tmp;
	int counter=0;
	ll X;
	ll answer=0;
	vector<int> given;

	cin >> X;

	answer+=(X/500)*1000;
	X-=(X/500)*500;
	answer+=(X/5)*5;
	
	cout << answer << endl;

	return 0;
}

