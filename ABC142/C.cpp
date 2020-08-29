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
	int counter=0;
	double ave;
	vector<int> given;

	cin >> N;
	int ans[N]={};

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	for(i=0;i<N;i++){
		ans[given[i]-1]=i+1;	
	}

	for(i=0;i<N;i++){
		cout << ans[i] << ' ' << flush;
	}
	cout << endl;


	return 0;
}

