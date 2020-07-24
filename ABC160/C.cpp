#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int K,N;
	int i,j;
	int tmp;
	int counter=0;
	ll answer=0;
	vector<ll> given;
	vector<ll> distance;

	cin >> K >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	for(i=0;i<N-1;i++)
		distance.push_back(abs(given[i]-given[i+1]));
	distance.push_back((K-given[N-1])+(given[0]));
	
	ll max = *max_element(distance.begin(), distance.end());

	answer=accumulate(distance.begin(),distance.end(),0)-max;
	cout << answer << endl;

	return 0;
}

