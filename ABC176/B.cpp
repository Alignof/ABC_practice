#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string N;
	int i,k;
	int ans=0;
	int ctr=0;
	ll sum=0;

	cin >> N;

	for(i=0;i<N.length();i++){
		sum+=N[i]-'0';
	}

	
	if(sum%9)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;

	return 0;
}

