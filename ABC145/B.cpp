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
	bool flag;
	double ave;
	string answer;
	string given;

	cin >> N;
	cin >> given;

	if(N%2){
		cout << "No" << endl;
		return 0;
	}

	flag=true;
	for(i=0;i<N/2;i++){
		if(given[i]!=given[i+(N/2)]){
			flag=false;
			break;
		}
	}
	
	answer=flag?"Yes":"No";
	cout << answer << endl;

	return 0;
}

