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

	cin >> given;

	int len=given.size();
	for(i=0;i<len/2;i++){
		if(given[i]!=given[len-1-i]) counter++;
	}

	//sort(given.begin(),given.end());
	//sort(given.begin(),given.end(),greater<int>());
	
	answer=counter;
	cout << answer << endl;

	return 0;
}

