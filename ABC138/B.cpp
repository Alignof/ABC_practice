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
	double sum;
	vector<string> given;
	
	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		sum+=(1/tmp);
	}
	
	printf("%.8f",(1/sum));

	return 0;
}

