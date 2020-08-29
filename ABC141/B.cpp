#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	string S;
	int i,j;
	int tmp;
	string answer;
	int counter=0;
	bool flag=true;
	double ave;
	vector<int> given;

	cin >> S;

	for(i=0;i<S.length();i++){
		if((i+1)%2){
			//odd
			if(S[i]=='L'){
				flag=false;
				break;
			}
		}else{
			//even
			if(S[i]=='R'){
				flag=false;
				break;
			}
		
		}
	}
	
	if(flag){
		answer="Yes";
	}else{
		answer="No";
	}

	cout << answer << endl;

	return 0;
}

