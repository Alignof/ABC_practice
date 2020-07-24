#include <bits/stdc++.h>
#define SIZE 30
using namespace std;
typedef long long ll;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	int tmp;
	int answer;
	int counter=0;
	double ave;
	//int given[SIZE]={-4,-3,-2,-1,0,1,2,3,4};
	ll given[SIZE]={-170202098,-268409015,537203564,983211703,21608710,-443999067,-937727165,-97596546,-372334013,398994917,-972141167,798607104,-949068442,-959948616,37909651,0,886627544,-20098238,0,-948955241,0,-214720580,277222296,-18897162,834475626,0,-425610555,110117526,663621752,0};
	vector<ll> result;

	for(i=0;i<SIZE-1;i++){
		for(j=i+1;j<SIZE;j++){
			cout << given[i]*given[j] << endl;
			result.push_back(given[i]*given[j]);
		}
	}

	cout << "------------------------------------------------------------------" << endl;

	sort(result.begin(),result.end());
	
	for(i=0;i<result.size();i++){
		cout << i << ":\t" << result[i] << endl;
	}


	return 0;
}

