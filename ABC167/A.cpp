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
	string S,T;
	vector<int> given;

	cin >> S >> T;


	if(S.size()==T.size()-1){
		if(equal(S.begin(),S.end(),T.begin(),T.end()-1))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}else{
		cout << "No" << endl;
	}

	/* Answer
	 *
	 *	T.pop_back();
	 *	if(S==T) cout << "Yes" << endl;
	 *	else cout << "No" << endl;
	 */
	
	return 0;
}

