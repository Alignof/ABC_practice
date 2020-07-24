#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	int tmp;
	ll min=1000000000;
	int place;
	ll answer;
	ll counter=0;
	double ave;
	vector<int> given;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	sort(given.begin(),given.end());

/*
	place=(given[0]+given[N-1])/2;
		
	for(i=0;i<N;i++){
		counter+=(ll)pow(abs(given[i]-place),2);
	}
*/
	for(place=1;place<=given[N-1];place++){
		counter=0;
		for(i=0;i<N;i++){
			counter+=(ll)pow(abs(given[i]-place),2);
		}
		if(min>counter) min=counter;
	}

	answer=min;
	cout << answer << endl;

	return 0;
}

