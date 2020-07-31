#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	char a,b;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> a >> b;
	
	if(a<b){
		for(i=0;i<b-'0';i++){
			cout << a;
		}
	}else{
		for(i=0;i<a-'0';i++){
			cout << b;
		}
	}
	
	cout << endl;

	return 0;
}

