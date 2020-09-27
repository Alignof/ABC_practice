#include <iostream>
using namespace std;

int main(void){
	int i;
	int K,X;

	cin >> K >> X;

	for(i=X-K+1;i<=X+K-1;i++){
		cout << i << " ";
	}
	cout << "\n";

	return 0;
}

