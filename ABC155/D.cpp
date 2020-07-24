#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,K;
	int i,j;
	int answer;
	int index=0;
	int counter=0;
	bool is_higher=false;
	bool is_lower=false;
	double ave;
	ll tmp;
	vector<int> plus;
	vector<int> zero;
	vector<int> minus;

	cin >> N >> K;

	for(i=0;i<N;i++){
		cin >> tmp;
		if(tmp<0) minus.push_back(tmp);
		if(tmp>0) plus.push_back(tmp);
		if(tmp==0) zero.push_back(tmp);
	}

	//sort(given.begin(),given.end(),greater<int>());
	if(K <= N(N-1)/4) is_lower=true;
	if(K > N(N-1)/4) is_higher=true;

	if(is_lower){
		sort(plus.begin(),plus.end(),greater<int>());
		sort(minus.begin(),minus.end());

		while(1){
			tmp=minus[index]*plus[index];

			counter++;
			if(counter==K){
				cout << tmp << endl;
			}
		}
	}

	answer=;
	cout << answer << endl;

	return 0;
}

