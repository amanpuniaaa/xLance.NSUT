#include<bits/stdc++.h>
using namespace std;

void display(priority_queue<vector<int>> pq) {
	while(!pq.empty()) {
		cout << pq.top()[0] << " " << pq.top()[1] << endl;
		pq.pop();
	}
}

void solve() {
	long long d,n,x;
	cin >> d >> n >> x;
	vector<int> q(n),l(n),v(n);
	vector<vector<int>> p(n, vector<int>(3));
	for(int i = 0;i < n;i++) {
		cin >> q[i] >> l[i] >> v[i];
		p[i] = {l[i], v[i], i}; 
	}

	long long ans = 0;
	sort(p.begin(), p.end());
	int day = 1;
	priority_queue<vector<int>> pq;
	int i = 0;
	for(day = 1; day <= d;day++) {
		while(i < n && p[i][0]+1 <= day) {
			//cout << p[i].first << " " << p[i].second << endl; 
			pq.push({p[i][1], p[i][2]});
			i++;
		}
		long long seedCnt = 0;
		//cout << "day " << day << endl; 
		//display(pq);
		while(!pq.empty() && seedCnt < x) {
			long long val = pq.top()[0], seeds = q[pq.top()[1]];
			//cout << seeds << endl;
			if(seedCnt+seeds <= x) {
				ans += val*seeds;
				seedCnt += seeds;
				//cout << q[pq.top()[1]] << endl;
				q[pq.top()[1]] = 0;
				pq.pop();
				
			} else {
				ans += val*(x-seedCnt);
				int ind = pq.top()[1];
				q[ind] = q[ind]-(x-seedCnt);
				seedCnt = x;
			}
			//cout << "ans " << ans << endl;
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
