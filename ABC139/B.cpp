#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int A,B;
	int i,j;
	int counter=0;
	int ans;
	int tmp=0;
	double ave;
	vector<int> given;

	cin >> A >> B;
	
	if(B==1){
		cout << 0 << endl;
		return 0;
	}

	while(1){
		if(counter==0){
			tmp+=A;
		}else{
			tmp+=A-1;
		}
		
		counter++;
		if(tmp>=B) break;
	}

	cout << counter << endl;

	return 0;
}

