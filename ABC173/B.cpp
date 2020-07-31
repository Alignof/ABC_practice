#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,k;
	int AC=0;
	int WA=0;
	int TLE=0;
	int RE=0;
	int ans=0;
	int ctr=0;
	string S;

	cin >> N;

	rep(i,N){
		cin >> S;
		if(S=="AC") AC++;
		else if(S=="WA") WA++;
		else if(S=="TLE") TLE++;
		else if(S=="RE") RE++;
	}

	cout << "AC x " << AC << endl;
	cout << "WA x " << WA << endl;
	cout << "TLE x " << TLE << endl;
	cout << "RE x " << RE << endl;

	return 0;
}

