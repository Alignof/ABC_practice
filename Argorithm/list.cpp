#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int INIT_SIZE=10;
typedef struct List List;
struct List{
	int data;
	List *next;
};

List *init(){
	List *alc;
	List *now=NULL;
	int i;

	for(i=0;i<INIT_SIZE;i++){
		alc=new List;
		alc->data=i;
		alc->next=now;
		now=alc;
	}

	return now;
}

void insert(List *head,int order,int value){
	int ctr=0;
	List *alc;
	List *now=head;

	// zero-based indices
	while(ctr!=order){
		now=now->next;
		ctr++;
	}

	alc=new List;
	alc->data=value;
	alc->next=now->next;
	now->next=alc;
}

void remove(List *head,int order){
	int ctr=0;
	List *del;
	List *now=head;

	// zero-based indices
	while(ctr!=order-1){
		now=now->next;
		ctr++;
	}

	del=now->next;
	now->next=now->next->next;
	delete del;
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	List *head=init();

	insert(head,3,65535);

	remove(head,3);

	return 0;
}
