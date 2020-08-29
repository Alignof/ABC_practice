#include <bits/stdc++.h>
#include <stdio.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){

	int N;
	int i,j;
	int tmp;
	int counter=0;
	double answer;
	double ave;
	vector<int> given;

	cin >> N;

	for(i=1;i<=N;i++){
		if(i%2) counter++;
	}

	printf("%.10f\n",(double)counter/N);
	return 0;
}

