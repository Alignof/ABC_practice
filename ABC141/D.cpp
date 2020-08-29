#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;
 
int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);
 
	int N,M;
	int i,j;
	ll tmp;
	ll sum;
	ll answer;
	vector<ll> given;
 
	cin >> N >> M;
 
	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}
 
	for(i=M;i>0;i--){
		vector<ll>::iterator iter=max_element(given.begin(),given.end());
		size_t index = std::distance(given.begin(), iter);
		given[index]/=2;
	}
	
	answer=accumulate(given.begin(),given.end(),0LL);
	cout << answer << endl;
 
	return 0;
}
