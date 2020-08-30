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
	int answer;
	int counter=0;
	double ave;
	vector<int> A,B,C;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		A.push_back(tmp);
	}
	
	for(i=0;i<N;i++){
		cin >> tmp;
		B.push_back(tmp);
	}
	
	for(i=0;i<N-1;i++){
		cin >> tmp;
		C.push_back(tmp);
	}

	for(i=0;i<N-1;i++){
		counter+=B[A[i]-1];
		if(A[i]==A[i+1]-1){
			counter+=C[A[i]-1];
		}
	}
	counter+=B[A[N-1]-1];
	
	answer=counter;
	cout << answer << endl;

	return 0;
}

