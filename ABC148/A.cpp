#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int A,B;
	int i,j;
	int tmp;
	int flags[3]={1,1,1};
	int answer;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> A >> B;
	
	flags[A-1]=0;
	flags[B-1]=0;

	for(i=0;i<3;i++){
		if(flags[i]){
			answer=i+1;
			break;
		}
	}
	
	cout << answer << endl;

	return 0;
}

