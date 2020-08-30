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
	vector<int> B;

	cin >> N;

	for(i=0;i<N-1;i++){
		cin >> tmp;
		B.push_back(tmp);
	}
	
	for(i=0;i<N;i++){
		if(i==0){
			counter+=B[0];
		}else if(i==N-1){
			counter+=B[N-2];
		}else{
			if(B[i]<B[i-1]){
				counter+=B[i];
			}else{
				counter+=B[i-1];
			}
		}
	}
	
	answer=counter;
	cout << answer << endl;

	return 0;
}

