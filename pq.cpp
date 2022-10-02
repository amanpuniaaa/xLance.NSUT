#include<bits/stdc++.h>
using namespace std;

void solve() {
	int d,n,x;
	cin >> d >> n >> x;
	vector<int> q(n),l(n),v(n);
	vector<vector<int>> p(n, vector<int>(3));
	for(int i = 0;i < n;i++) {
		cin >> q[i] >> l[i] >> v[i];
		p[i] = {q[i], l[i], v[i]}; 
	}

	int ans = 0;
	sort(p.begin(), p.end());
	int day = 1;
	priority_queue<vector<int>> pq;
	int i = 0;
	for(day = 1; day <= d;day++) {
		while(i < n && p[i][1]+1 <= day) {
			//cout << p[i].first << " " << p[i].second << endl; 
			pq.push({p[i][2], p[i][0]});
			i++;
		}
		if(!pq.empty()) {
			ans += pq.top()[0];
			pq.pop();
		}
		
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	for(int i = 1;i <= t;i++) {
		cout << "Case #" << i << ": "; 
		solve();
	}
	return 0;
}
