#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

unsigned euclidean_gcd(unsigned a, unsigned b) {
	while(1) {
		if(a<b) swap(a,b);
		if(!b) break;
		a%=b;
	}
	return a;
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j,k;
	int tmp;
	ll answer=0;
	ll counter=0;
	vector<int> given;

	cin >> N;

	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			for(k=1;k<=N;k++){
				answer+=euclidean_gcd(euclidean_gcd(i,j),k);
				//cout << answer << endl;
			}
		}
	}

	cout << answer << endl;

	return 0;
}

