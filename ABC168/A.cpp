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
	int counter=0;
	double ave;
	string answer;
	vector<int> given;

	cin >> N;

	N=N%10;

	if(N==3){
		answer="bon";
	}else if(N==0 |N==1 |N==6 |N==8){
		answer="pon";
	}else{
		answer="hon";
	}
	cout << answer << endl;

	return 0;
}

