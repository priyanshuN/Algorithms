#include <bits/stdc++.h>
using namespace std;

int w, h, n;
vector<int> dirx = {0, 0, 1, -1};
vector<int> diry = {1, -1, 0, 0};
int maxdistance = INT_MAX;

// help convert (x, y) to decimal-based position
int calc(int x, int y) {
    return (w * x) + y;
}

// check whether out of bound and visited before in bfs
bool check_valid(int x, int y, unordered_set<int> visited) {
    if(x < 0 || x >= h)
        return false;
    if(y < 0 || y >= w)
        return false;
    if(visited.count(calc(x, y)))
        return false;
    return true;
}

// level-ordered bfs and each time find the longest path on map
int bfs(vector<vector<int>> map,
        vector<pair<int, int>> start_point) {
    int local_max = 0;
    queue<pair<int, int>> q;
    unordered_set<int> visited;

    for(auto s : start_point) {
        q.push(s);
        visited.insert(calc(s.first, s.second));
    }

    int dist = 0;
    while(!q.empty()) {
        int sz = q.size();
        dist++;
        for(int i = 0; i < sz; i++) {
            pair<int, int> head = q.front();
            q.pop();
            for(int i = 0; i < 4; i++) {
                pair<int, int> neighbor = make_pair(head.first + dirx[i], head.second + diry[i]);
                if(check_valid(neighbor.first, neighbor.second, visited)) {
                    map[neighbor.first][neighbor.second] = dist;
                    visited.insert(calc(neighbor.first, neighbor.second));
                    q.push(neighbor);
                }
            }
        }
    }

    // after visiting the whole map
    // find the maxdistance
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(map[i][j] > local_max)
                local_max = map[i][j];
        }
    }

    return local_max;
}

// list all the cases for starting point: 0
// in fact, not all the cases
// I considered optimal start point would show up in each distance of (w*h/n)
void dfs(vector<vector<int>> map,
        int d,
        int n_,
        int n, 
        vector<pair<int, int>> start_point) {
    if(n_ == n) {
        // cout << "Map: " << '\n';
        /**
        for(int i = 0; i < map.size(); i++) {
            for(int j = 0; j < map[i].size(); j++) {
                cout << map[i][j] << ' ';
            }
            cout << '\n';
        }
        cout << "distance?: ";**/
        if(bfs(map, start_point) < maxdistance) {
            maxdistance = bfs(map, start_point);
            cout << maxdistance << '\n';
        }
        return;
    }

    for(int i = 0; i < d; ++i) {
        int pos = n_ * d + i;
        map[pos / w][pos % w] = 0;
        start_point[n_].first = pos / w;
        start_point[n_].second = pos % w;
        dfs(map, d, n_ + 1, n, start_point);
        map[pos / w][pos % w] = INT_MAX;
        start_point[n_].first = -1;
        start_point[n_].second = -1;
    }
}

int main() {
    cin >> w >> h >> n;
    int d = (w*h)/n;   // build one office in each d distance
    vector<vector<int>> map(h, vector<int>(w, INT_MAX));
    vector<pair<int, int>> start_point(n, make_pair(-1, -1));
    dfs(map, d, 0, n, start_point);
    cout << "Max distance of one of optimal solution is: " << maxdistance << '\n';

    return 0;
}