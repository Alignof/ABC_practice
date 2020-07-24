#include <bits/stdc++.h>
#define SIZE 50
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

void quicksort(vector<int> &data,int left,int right){
	int l=left;
	int r=right;
	int pivot=data[(left+right)/2];

	if(left>=right) return;

	while(1){
		while(data[l]<pivot) l++;
		while(pivot<data[r]) r--;
		if(l>=r) break;

		swap(data[l],data[r]);
		l++;r--;
	}

	quicksort(data,left,l-1);
	quicksort(data,r+1,right);
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,j;
	vector<int> data(SIZE);

	srand((unsigned)time(NULL));
	rep(i,SIZE) data[i]=rand()%SIZE;

	rep(i,SIZE) cout << setw(2) << data[i] << " ";
	cout << endl;

	quicksort(data,0,SIZE-1);

	rep(i,SIZE) cout << setw(2) << data[i] << " ";
	cout << endl;

	return 0;
}
