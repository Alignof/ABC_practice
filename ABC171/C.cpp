#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	ll N;
	ll mod;
	ll div;
	int i,j;
	// 0-25
	char abc[]="abcdefghijklmnopqrstuvwxyz";
	ll counter=0;
	vector<int> given;
	vector<char> answer;

	cin >> N;

	do{
		// 0-25
		mod=(N-1)%26;
		answer.push_back((mod));

		N=(N-1)/26;
		counter++;
	}while(N>0);

	for(i=counter-1;i>=0;i--)
		cout << abc[answer[i]];
	cout << endl;


	return 0;
}

