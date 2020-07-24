#include <bits/stdc++.h>
#include <cstdio>
#define SIZE 10
using namespace std;
typedef long long ll;

double sigma(int i){
	int ret=i;
	while(i){ret+=i-1;i--;}
	return ret;
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int K,N;
	int i,j;
	int tmp;
	double answer;
	int counter=0;
	double ave;
	double expectation[1000]={0};

	cout << "{";
	for(i=1;i<=1000;i++){
		cout << sigma(i)/(double)i << ",";
	}

	cout << "};" << endl;

	return 0;
}

