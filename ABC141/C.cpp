#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,K,Q;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;

	cin >> N >> K >> Q;
	
	int points[N]={};

	for(i=0;i<Q;i++){
		cin >> tmp;
		points[tmp-1]++;
	}

	for(i=0;i<N;i++){
		if(K-Q+points[i]>0){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		
		}
	}


	return 0;
}

