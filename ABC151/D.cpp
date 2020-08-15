#include <bits/stdc++.h>
#define INF 1001001001
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int H;
int W;
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

void display_matrix(vector<vector<int>>& matrix){
	int x,y;
	cout << "-----------------" << endl;
	for(y=0;y<H;y++){
		for(x=0;x<W;x++){
			cout << setw(3) << matrix[y][x];  
		}
		cout << endl;
	}
	cout << "-----------------" << endl;
}

int bfs(vector<vector<int>>& maze){
	int x,y;
	int dmax=0;
	int start_x;
	int start_y;
	vector<vector<int>> dist;
	queue<pair<int,int>> que;

	for(start_y=0;start_y<H;start_y++){
		for(start_x=0;start_x<W;start_x++){
			dist.clear();
			dist.resize(H,vector<int>(W,-1));

			if(maze[start_y][start_x]) continue;
			dist[start_y][start_x]=0;
			que.emplace(start_x,start_y);

			/*
			cout << "===============START==============" << endl;
			cout << start_x << "," << start_y << endl;
			display_matrix(dist);
			*/

			while(!que.empty()){
				x=que.front().first;
				y=que.front().second;
				que.pop();

				rep(i,4){
					if(!(0<=x+dx[i] && x+dx[i]<W && 0<=y+dy[i] && y+dy[i]<H)) continue;
					if(dist[y+dy[i]][x+dx[i]]>=0) continue;
					if(maze[y+dy[i]][x+dx[i]]) continue;

					que.emplace(x+dx[i],y+dy[i]);
					dist[y+dy[i]][x+dx[i]]=dist[y][x]+1;
				}

				//display_matrix(dist);
			}

			rep(x,W)rep(y,H) dmax=max(dmax,dist[y][x]);
		}
	}

	return dmax;
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int i,k;
	int x,y;
	int ans=0;
	int ctr=0;
	char input;

	cin >> H >> W;
	vector<vector<int>> maze(H,vector<int>(W,0));

	for(y=0;y<H;y++){
		for(x=0;x<W;x++){
			cin >> input;
			if(input=='#') maze[y][x]=1;
			else maze[y][x]=0;
		}
	}

	ans=bfs(maze);

	cout << ans << endl;
	return 0;
}

