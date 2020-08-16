#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

typedef struct{
	double x;
	double y;
}point;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);
	std::cout<<std::fixed<<std::setprecision(10);

	int N;
	int i,j;
	int counter=0;
	double sum=0;
	double ave;
	double answer;

	cin >> N;

	point given[N];

	for(i=0;i<N;i++){
		cin >> given[i].x >> given[i].y;
	}

	for(i=0;i<N;i++){
		//cout << given[i].x << " " << given[i].y << endl;
		for(j=i+1;j<N;j++){
			sum+=sqrt(pow(given[i].x-given[j].x,2.0)+pow(given[i].y-given[j].y,2.0));
		}
	}

	answer=(double)	sum/N;
	answer*=2;
	cout << answer << endl;

	return 0;
}

