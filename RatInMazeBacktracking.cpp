#include <bits/stdc++.h>
using namespace std;

bool ratInMaze(char maze[][10], int solution[][10], int i, int j, int n, int m) {
    // Base Case
    if (i == m and j == n) {
        solution[m][n] = 1;
        // Print the path
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                cout << solution[i][j] << ' ';
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }
    // Recursive case
    // Rat should be inside grid
    if (i > m || j > n) {
        return false;
    }
    // current cell shouldn't be blocked
    if (maze[i][j] == 'X') {
        return false;
    }
    // assume solution exists through current cell
    solution[i][j] = 1;
    //Recursive case
    bool rightSuccess = ratInMaze(maze, solution, i, j + 1, n, m);
    bool downSuccess = ratInMaze(maze, solution, i + 1, j, n, m);
    // BACKTRACKING
    // Code executed after both function calls is called backtracking
    // Voh pehle jitni possibilities explore karke vaapis aayega toh vaapis aate
    // time unhe 0 bhi karna hoga kyunki otherwise saare 1 store hote jayenge
    solution[i][j] = 0;

    if (rightSuccess || downSuccess) {
        return true;
    }
    return false;
}

int main() {
    char maze[10][10] = {"0000", "00X0", "000X", "0X00"};
    int solution[10][10] = {0};
    int m = 4, n = 4;
    bool ans = ratInMaze(maze, solution, 0, 0, n - 1, m - 1);
    if (ans == false) {
        cout << -1 << endl;
    }
    return 0;
}