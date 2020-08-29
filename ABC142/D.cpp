#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

unsigned euclidean_gcd(unsigned a, unsigned b) {
	while(1) {
		if(a < b) swap(a, b);
		if(!b) break;
		a %= b;
	}
	return a;
}


int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int A,B;
	int i,j;
	int tmp;
	int gcd;
	int answer;
	int counter=1;
	double ave;
	vector<int> cds;

	cin >> A >> B;

	gcd=euclidean_gcd(A,B);

	if(gcd==1){
		cout << 1 << endl;
		return 0;
	}

	for(i=2;i<=gcd/2;i++){
		if(!(gcd%i)){
			cds.push_back(i);
		}
	}

	while(1){
		/*
		for(i=0;i<cds.size();i++){
			cout << cds[i] << ' ' << flush;
		}
		cout << endl;
		*/

		counter++;
		if(cds.size()==1) break;
		
		for(i=1;i<cds.size();i++){
			if(!(cds[i]%cds[0])){
				cds.erase(cds.begin()+i);
				i--;
			}
		}

		cds.erase(cds.begin());
	}

	answer=counter;
	cout << answer << endl;

	return 0;
}

