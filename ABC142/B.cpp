#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,K;
	int i,j;
	int tmp;
	int answer=0;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> N >> K;

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	sort(given.begin(),given.end());
	
	if(given[N/2]<K){
		//half x
		for(i=N/2;i<N;i++){
			if(given[i]>=K){
				answer=N-i;
				break;
			}
		}
	}else{
		//half o
		for(i=0;i<N;i++){
			if(given[i]>=K){
				answer=N-i;
				break;
			}
		}
	}

	cout << answer << endl;

	return 0;
}

