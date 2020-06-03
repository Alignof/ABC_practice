#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,K;
	int i,j,d;
	int tmp;
	int answer=0;
	int counter=0;
	vector<bool> given;

	cin >> N >> K;
	given.resize(N,true);


	for(i=0;i<K;i++){
		cin >> d;
		for(j=0;j<d;j++){
			cin >> tmp;
			given[tmp-1]=false;
		}
	}

	//sort(given.begin(),given.end());
	//sort(given.begin(),given.end(),greater<int>());
	
	for(i=0;i<N;i++) if(given[i]) counter++;

	answer=counter;
	cout << answer << endl;

	return 0;
}

