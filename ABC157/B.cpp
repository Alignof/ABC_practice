#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	int tmp;
	int ans=0;
	int ctr=0;

	vector<int> bi(9);
	rep(i,9)
		cin >> bi[i];

	cin >> N;
	rep(i,N){
		cin >> tmp;
		rep(k,9) if(bi[k]==tmp) bi[k]=0;
	}

	if(	bi[0]==bi[1] && bi[1]==bi[2] ||
		bi[3]==bi[4] && bi[4]==bi[5] ||
		bi[6]==bi[7] && bi[7]==bi[8] ||
		bi[0]==bi[3] && bi[3]==bi[6] ||
		bi[1]==bi[4] && bi[4]==bi[7] ||
		bi[2]==bi[5] && bi[5]==bi[8] ||
		bi[0]==bi[4] && bi[4]==bi[8] ||
		bi[6]==bi[4] && bi[4]==bi[2]   )
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}


