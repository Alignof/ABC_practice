#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	int max=0;
	int counter=0;
	int tmp;
	double ave;
	vector<int> given;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	for(i=0;i<N-1;i++){
		if(given[i]>=given[i+1]){
			counter++;
		}else{
			if(counter>max){
				max=counter;
			}
			counter=0;
		}
	}
	
	if(counter>max){
		max=counter;
	}

	cout << max << endl;

	return 0;
}

