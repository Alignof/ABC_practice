#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	int answer;
	int max=0;
	int counter=0;
	double ave;
	string tmp;
	map<string,int> mp;
	vector<string> given;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		given.push_back(tmp);
	}

	for(i=0;i<N;i++){
		auto itr=mp.find(given[i]);
		mp[given[i]]++;
	}

	for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
			if(max < itr->second) max=itr->second;
	}

	for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
			if(max==itr->second) cout << itr->first << endl;
	}

	return 0;
}

