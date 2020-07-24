#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	int tmp;
	int answer=0;
	int counter=0;
	vector<int> given;

	cin >> N;

	if(N%10 == 7 || (N/10)%10 == 7 || (N/100)%10 == 7)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

