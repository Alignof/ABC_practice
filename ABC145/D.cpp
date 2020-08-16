#include <bits/stdc++.h>
#define SIZE 10
#define MODURO 10000007
using namespace std;
typedef long long ll;

int counter=0;

int search(int x,int y){
	if(!(x||y)){
		counter++;
		return 0;
	}

	if(x<0 || y<0) return 0;
	search(x-1,y-2);
	search(x-2,y-1);
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int X,Y;
	int i,j;
	int sum;
	int answer;
	double ave;

	cin >> X >> Y;
	
	if(!((X+Y)%3)){
		cout << 0 << endl;
		return 0;
	}

	/* n+2m=X
	 * 2m+n=Y
	 */

	search(X,Y);
	
	answer=counter;
	cout << answer << endl;

	return 0;
}

