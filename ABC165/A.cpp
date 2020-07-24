#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int K,A,B;
	int i,j;
	int tmp;
	int answer=0;
	int counter=0;
	vector<int> given;

	cin >> K >> A >> B;

	for(i=A;i<=B;i++){
		if(i%K==0){
			cout << "OK" << endl;
			exit(0);
		}
	}
	
	cout << "NG" << endl;

	return 0;
}

