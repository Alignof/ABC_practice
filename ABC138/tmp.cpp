#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#define SIZE 10
using namespace std;

class node{
	private:
		int value=0;
		vector<int> childs;

	public:
		void append(node *child){
			childs.push_back(child);
		}

		void add_value(int add){
			if(childs.size()==0){
				return 0;
			}

			for(int i=0;i<child.size();i++){
				value+=add;
				childs[i].add_value(add);
			}
		}
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,Q;
	int i,j;
	int a,b;
	vector<double> given;

	cin >> N >> Q;

	node nodes[N];

	for(i=0;i<N;i++){
		cin >> a >> b;
		nodes[a-1].append(&nodes[b-1]);
	}

	for(i=0;i<Q;i++){
		cin >> a >> b;
		nodes[a-1].add_value(b);
	}
	
	for(i=0;i<N;i++){
		cout << nodes[i].value << " ";
	}
	cout << endl;
	

	return 0;
}

