#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int mirror(int x){
	int ret=0;

	while(1){
		ret+=x%10;
		x/=10;
		
		if(x==0) return ret;
		ret*=10;
	}
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int add=1;
	int i,j;
	int tmp;
	int head;
	int answer=0;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> N;

	if(N<10){
		cout << N << endl;
		return 0;
	}
	
	head=N;
	while(head<10) head/=10;

	for(i=1;i<N;i++){
		if(add<=i) add*=10;
		if(i%10 && i%10<=head && mirror(i)<=N){
			if(i<100) counter++;
			if(i>100) counter+=i/(add/100);
			cout << i << ":" << mirror(i) << endl;
		}
	}

	answer=counter;
	cout << answer << endl;

	return 0;
}

