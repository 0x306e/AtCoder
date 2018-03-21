#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
class Point;

int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};
int cnt = 0;
queue<Point> q;
int H, W;
char s[51][51];

class Point {
public:
    int x;
    int y;
    Point(int a, int b){
        this->x = a;
        this->y = b;
    };
};

bool bfs(Point p){
    if(p.x < 0 || p.x >= H || p.y < 0 || p.y >= W) false;
    if(s[p.x][p.y] == '#') return false;
    if(p.x == H && p.y == W) return true;
    s[p.x][p.y] = '#';
    q.push(Point(p.x+dx[0], p.y+dy[0]));
    q.push(Point(p.x+dx[1], p.y+dy[1]));
    q.push(Point(p.x+dx[2], p.y+dy[2]));
    q.push(Point(p.x+dx[3], p.y+dy[3]));
}

int main(int argc, char* argv[]){
    int black = 0;
    queue<Point> que;
    cin >> H >> W;
    for(int i = 0; i < H; i++){
        scanf("%s", s[i]);
        for(int j = 0; j < strlen(s[i]); j++){
            if(s[i][j] == '#') black++;
        }
    }
    for(int i = 0; i < H + W; i++){
        cnt++;
        copy(q.cbegin(), q.cend(), que);
        while(!q.empty()) q.pop();
        while(!que.empty()){
            if(bfs(que.front())){
                cout << H * W - black - cnt << endl;
                return 0;
            }
            que.pop();
        }
    }
    cout << -1 << endl;
}