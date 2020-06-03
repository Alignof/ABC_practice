#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int i,j;
	int tmp;
	int counter=0;
	double A,B,H,M;
	double answer;
	double degH,degM;
	double radH,radM;
	vector<int> given;

	cin >> A >> B >> H >> M;


	// 12*30=360
	degH=H*30.0;
	// 60*6=360
	degM=M*6.0;
	degH+=30*(M/60);

	radH=(degH*PI)/180.0;
	radM=(degM*PI)/180.0;
	answer=sqrt((pow(A,2.0)+pow(B,2.0))-(long double)(2.0*A*B)*cos(abs(radH-radM)));
	cout << fixed << setprecision(15) << answer << endl;

	return 0;
}

