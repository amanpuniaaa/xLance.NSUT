#include <bits/stdc++.h>

#include <queue>
using namespace std;

// Each node of pq will store the value of element, the index of the array to
// which it belongs, the index of the element itself in that array
typedef pair<int, pair<int, int>> node;

vector<int> mergeKsortedArrays(vector<vector<int>> v) {
    vector<int> result;
    priority_queue<node, vector<node>, greater<node>> pq;  // Min heap
    // Insert the zeroth element of every array in pq initially.
    for (int i = 0; i < v.size(); i++) {
        pq.push({v[i][0], {i, 0}});
    }
    // Remove elements one by one from the min heap and add to result vector
    while (!pq.empty()) {
        node current = pq.top();
        result.push_back(current.first);
        pq.pop();
        int arr_idx = current.second.first;       // Row/Array of element
        int element_idx = current.second.second;  // Column of element

        // We need to push the next element of current element which is at
        // (row,column+1)th index
        if (element_idx + 1 < v[arr_idx].size()) {
            // If next element of current element exists in that array then only
            // we'll push it
            pq.push({v[arr_idx][element_idx + 1], {arr_idx, element_idx + 1}});
        }
    }
    return result;
}

int main() {
    vector<vector<int>> v{{2, 6, 12, 15}, {1, 3, 14, 20}, {3, 5, 8, 10}};
    // As we did in merge sort, while merging we kept 2 pointers and added the
    // min out of them to final array. Now here for k sorted arrays we can keep
    // k pointers and add the min out of them to the array and move that pointer
    // to its next in array. for this we can create a min heap which will give
    // us the min element out of the k elements.
    // Since here we have 3 arrays, we'll need 3 pointers so we make a min heap
    // of size 3.
    vector<int> result = mergeKsortedArrays(v);
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}