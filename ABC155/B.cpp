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
	bool flag=true;
	double ave;
	vector<int> given;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	for(i=0;i<N;i++){
		if(!(given[i]%2) && !(given[i]%3==0 || given[i]%5==0)){
			flag=false;
			break;
		}
	}

	if(flag) cout << "APPROVED" << endl;
	if(!flag) cout << "DENIED" << endl;

	return 0;
}

