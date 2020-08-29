#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string N;
	int i,j;
	int tmp;
	string answer;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> N;

	if(N[0]=='S'){
		answer="Cloudy";
	}else if(N[0]=='C'){
		answer="Rainy";
	}else{
		answer="Sunny";
	}
	cout << answer << endl;

	return 0;
}

