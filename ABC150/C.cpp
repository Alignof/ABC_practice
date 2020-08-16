#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int stair(int x){
	if(x==1) return 1;
	return x*stair(x-1);
}

int order(vector<int> X,int N,int index){
	int i;
	vector<int> tmp;

	for(i=index;i<N;i++){
		tmp.push_back(X[i]);
	}
	sort(tmp.begin(),tmp.end());
	
	for(i=0;i<N-index;i++){
		if(X[index]==tmp[i]) return i+1;
	}
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	int tmp;
	int p_sum=0;
	int q_sum=0;
	int answer=0;
	int counter=0;
	double ave;
	vector<int> P;
	vector<int> Q;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		P.push_back(tmp);
	}

	for(i=0;i<N;i++){
		cin >> tmp;
		Q.push_back(tmp);
	}


	for(i=0;i<N-1;i++){
		p_sum+=stair(N-i-1)*(order(P,N,i)-1);
		q_sum+=stair(N-i-1)*(order(Q,N,i)-1);
	}
	
	answer=abs(p_sum-q_sum);
	cout << answer << endl;

	return 0;
}

