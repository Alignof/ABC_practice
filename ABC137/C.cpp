#include <iostream>
#include <algorithm>
#include <vector>
#define SIZE 10
using namespace std;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	int sum=0;
	int flag=0;
	int count=0;
	string tmp;
	vector<string> given;

	cin >> N;

	for(i=0;i<N;i++){
		cin >> tmp;
		sort(tmp.begin(),tmp.end());
		given.push_back(tmp);
	}

	sort(given.begin(), given.end());
/*
	cout << "---------------------------------------" << endl;
	for(i=0;i<N;i++){
		cout << given[i] << endl;
	}
*/

	for(i=0;i<N;i++){
		if(flag<=i){
			for(j=i+1;j<N;j++){
				if(given[i]==given[j]){
					count++;
				}else{
					sum+=(count+1)*count/2;
					count=0;
					flag=j;
					break;
				}
			}
		}
	}
	
	sum+=(count+1)*count/2;
	cout << sum << endl;

	return 0;
}

