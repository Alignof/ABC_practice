#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int A,B,C,K;
	int i,j;
	int tmp;
	int answer=0;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> A >> B >> C >> K;

	if(A<=K){
		answer+=A;
		K-=A;
	}else{
		answer+=K;K=0;
	}

	if(B<=K){
		K-=B;
	}else{
		K=0;
	}

	if(C<=K){
		answer-=C,K-=C;
	}else{
		answer-=K;
	}


	/* Answer
	 *
	 *	if(K<=A) cout << K << endl;
	 *	else if(k<=A+B) cout << A << endl;
	 *	else cout << A-(K-A-B) << endl;
	 */
	
	cout << answer << endl;

	return 0;
}

