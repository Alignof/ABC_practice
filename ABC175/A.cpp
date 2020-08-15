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
	int ans=0;
	int ctr=0;
	string S;

	cin >> S;
	if(S=="SSS") cout << 0 << endl;
	if(S=="SSR") cout << 1 << endl;
	if(S=="SRS") cout << 1 << endl;
	if(S=="SRR") cout << 2 << endl;
	if(S=="RSS") cout << 1 << endl;
	if(S=="RSR") cout << 1 << endl;
	if(S=="RRS") cout << 2 << endl;
	if(S=="RRR") cout << 3 << endl;

	return 0;
}

