#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int A,B,C;
	bool flag=false;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> A >> B >> C;

	if(A==B && A!=C) flag=true;
	if(A==C && A!=B) flag=true;
	if(B==C && B!=A) flag=true;
	
	if(flag) cout << "Yes" << endl;
	if(!flag) cout << "No" << endl;

	return 0;
}

