#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#define SIZE 10
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	double tmp;
	double ave;
	vector<double> given;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	sort(given.begin(),given.end());

	if(N==1){
		cout << given[0] << endl;
		return 0;
	}else{
		ave=(given[0]+given[1])/2;
		for(i=2;i<N;i++){
			ave=(ave+given[i])/2;
		}

		cout << ave << endl;
	}

	return 0;
}

