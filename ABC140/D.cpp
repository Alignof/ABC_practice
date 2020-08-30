#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

char change(char a){
	return (a=='L')?'R':'L';
}

void operate(char *S,int l,int r){
	int i;
	char tmp;
	for(i=l;i<(l+r)/2;i++){
		tmp=change(S[i]);
		S[i]=change(S[r-(i-l)]);
		S[r-(i-l)]=tmp;
	}
	cout << S << endl;
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,K;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	string S;
	vector<int> given;

	cin >> N >> K;
	cin >> S;
	
	while(1){
		cout << "input l>>" << flush;
		cin >> i;
		if(i<0)return 0;
		
		cout << "input r>>" << flush;
		cin >> j;

		operate(&S[0],i,j);
	}
	cout << S << endl;
	cout << answer << endl;

	return 0;
}

