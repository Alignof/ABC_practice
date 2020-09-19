#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int i,k;
	int ans=0;
	int ctr=0;
	string S;

	cin >> S;

	
	if(S[S.size()-1]=='s')
		cout << S << "es" << endl;
	else
		cout << S << "s" << endl;

	return 0;
}

