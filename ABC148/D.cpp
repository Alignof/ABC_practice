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
	int now=1;
	int answer;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	for(i=0;i<N;i++){
		if(given[i]==now){
			now++;
		}else{
			counter++;
		}
	}

	if(now==1){
		cout << -1 << endl;
	}else{
		answer=counter;
		cout << answer << endl;
	}

	return 0;
}

