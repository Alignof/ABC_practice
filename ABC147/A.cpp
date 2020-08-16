#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int A,B,C;
	int i,j;
	int tmp;
	int counter=0;
	vector<int> given;
	string answer;

	cin >> A >> B >> C;
	
	if(A+B+C>=22){
		answer="bust";
	}else{
		answer="win";
	}
	
	cout << answer << endl;

	return 0;
}

