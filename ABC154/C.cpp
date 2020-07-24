#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int size=0;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	size=given.size();

	sort(given.begin(), given.end());
	given.erase(std::unique(given.begin(), given.end()), given.end());
	
	if(size==given.size()){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}

