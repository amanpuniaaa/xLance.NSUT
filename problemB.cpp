#include<bits/stdc++.h>
using namespace std;
class Tree {
public:
	vector<int> child;
	int id, level;
	double value = 0;
	int parent;
};

void fill(int num, int val, vector<Tree>& tree, unordered_map<int, vector<int>>& levels) {
	if(num == 1) {
			tree[1].value = val;
	} else {
		int curr = num;
		while(tree[tree[curr].parent].value == 0 && tree[curr].parent != 1)
			curr = tree[curr].parent;
		int cur_level = tree[curr].level;
		
	}
}
void solve() {
	int n,Q;
	cin >> n >> Q;
	vector<vector<int>> graph(n+1);
	for(int i = 0;i < n-1;i++) {
		int u,v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	vector<int> queries(Q);
	for(auto& i: queries)
		cin >> i;
	unordered_map<int,bool> visited;
	unordered_map<int, pair<int,vector<int>>> levels;
	queue<int> q;
	vector<Tree> tree(n+1);
	q.push(1);
	int lvl = 1; 
	while(!q.empty()) {
		int s = q.size();
		levels[lvl].first = 0;
		for(int i = 0;i < s;i++) {
			int curr = q.front();
			Tree temp;
			temp.id = curr;
			temp.level = lvl;
			levels[lvl].second.push_back(curr);
			q.pop();
			for(auto j: graph[curr]) {
				if(visited[j] == false) {
					temp.child.push_back(j);
					tree[j].parent = curr;
					q.push(j);
				}
			}
			visited[curr] = true;
			tree[curr] = temp;
		}
		lvl++;
	}
	int curr_level = 1;
	for(auto num: queries) {
		fill(num, 1, tree, levels);
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cout << "Case #" << t << ": "; 
		solve();
	}
	return 0;
}
