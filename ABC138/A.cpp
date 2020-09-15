#include <iostream>
#include <algorithm>
#include <vector>
#define SIZE 10
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a;
	string s;

	cin >> a;
	cin >> s;

	if(a>=3200){
		cout << s << endl;
	}else{
		cout << "red" << endl;
	}

	return 0;
}

