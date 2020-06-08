#include <bits/stdc++.h>
#define SIZE 10
#define PI 3.141592653589793

using namespace std;
typedef long long ll;

struct data{
	int Ai;
	int Bi;
	int ans;
	int point;
};

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,M,Q;
	int a,b,c,d;
	int i,j;
	int answer=0;
	int counter=0;
	data tmp;
	vector<data> given;

	cin >> N >> M >> Q;

	for(i=0;i<N;i++){
		cin >> tmp.Ai >> tmp.Bi >> tmp.ans >> tmp.point;
		given.push_back(tmp);
	}

	//sort(given.begin(),given.end());
	//sort(given.begin(),given.end(),greater<int>());
	
	answer=0;
	cout << answer << endl;

	return 0;
}

