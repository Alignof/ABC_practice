#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int win(int x){
	switch(x){
		case 0:
			return 2;
		case 1:
			return 0;
		case 2:
			return 1;
	}
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,K,R,S,P;
	int i,j;
	int prev=-1;
	int answer;
	int counter=0;
	double ave;
	char tmp;
	vector<int> given;

	cin >> N >> K >> R >> S >> P;

	int points[]={R,S,P};

	for(i=0;i<N;i++){
		cin >> tmp;
		if(tmp=='r'){
			given.push_back(0);
		}else if(tmp=='s'){
			given.push_back(1);
		}else{
			given.push_back(2);
		}
	}

	for(i=0;i<N;i++){
		if(prev!=given[i] || i<K)counter+=points[win(given[i])];
		prev=given[i];
	}

	//sort(given.begin(),given.end());
	//sort(given.begin(),given.end(),greater<int>());
	
	answer=counter;
	cout << answer << endl;

	return 0;
}

