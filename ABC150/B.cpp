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
	string given;

	cin >> N >> given;

	for(i=0;i<N-2;i++){
		if(given[i]=='A' && given[i+1]=='B' && given[i+2]=='C') counter++;
	}

	//sort(given.begin(),given.end());
	//sort(given.begin(),given.end(),greater<int>());
	
	answer=counter;
	cout << answer << endl;

	return 0;
}

