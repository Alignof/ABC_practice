#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
#define FOR(i, a, b) for(int i=(a); i<(b); ++i)
#define FORR(i, a, b) for(int i=(b)-1; i>=(a); --i)
using namespace std;
using ll = long long;
const ll MOD=1e9+7;
constexpr int MAX=510000;

#include<iostream>
#include<vector>
using namespace std;
void comb(vector<vector <long long int> > &v){
  for(int i = 0;i <v.size(); i++){
    v[i][0]=1;
    v[i][i]=1;
  }
  for(int k = 1;k <v.size();k++){
    for(int j = 1;j<k;j++){
      v[k][j]=(v[k-1][j-1]+v[k-1][j]);
    }
  }
}

int main(){
  int N,K;
  cin >> N >>K;
  vector<vector<long long int> > v(N+1,vector<long long int>(N+1,0));
  comb(v);
  cout << v[N][K];
  return 0;
}
