#include <bits/stdc++.h>
using namespace std;

class Solution {

private:

    // Checks whether the next cell is safe to visit
    bool isSafe(int x, int y,
                int n,
                vector<vector<int>>& maze,
                vector<vector<int>>& visited)
    {
        // Cell should:
        // 1. Be inside the maze
        // 2. Not be visited already
        // 3. Not be blocked (value should be 1)

        if ((x >= 0 && x < n) &&
            (y >= 0 && y < n) &&
            visited[x][y] == 0 &&
            maze[x][y] == 1)
        {
            return true;
        }

        return false;
    }

    // Recursive Backtracking Function
    void solve(vector<vector<int>>& maze,
               int n,
               vector<string>& ans,
               int x,
               int y,
               vector<vector<int>>& visited,
               string path)
    {
        // ===============================
        // Base Case
        // ===============================
        // Destination reached
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        // Mark current cell as visited
        visited[x][y] = 1;

        // ===============================
        // Move Down (D)
        // ===============================
        int newX = x + 1;
        int newY = y;

        if (isSafe(newX, newY, n, maze, visited))
        {
            solve(maze, n, ans, newX, newY, visited, path + 'D');
        }

        // ===============================
        // Move Left (L)
        // ===============================
        newX = x;
        newY = y - 1;

        if (isSafe(newX, newY, n, maze, visited))
        {
            solve(maze, n, ans, newX, newY, visited, path + 'L');
        }

        // ===============================
        // Move Right (R)
        // ===============================
        newX = x;
        newY = y + 1;

        if (isSafe(newX, newY, n, maze, visited))
        {
            solve(maze, n, ans, newX, newY, visited, path + 'R');
        }

        // ===============================
        // Move Up (U)
        // ===============================
        newX = x - 1;
        newY = y;

        if (isSafe(newX, newY, n, maze, visited))
        {
            solve(maze, n, ans, newX, newY, visited, path + 'U');
        }

        // =====================================
        // BACKTRACKING
        // =====================================
        // Unmark the current cell before returning
        // so other paths can use it.
        visited[x][y] = 0;
    }

public:

    vector<string> ratInMaze(vector<vector<int>>& maze)
    {
        vector<string> ans;

        int n = maze.size();

        // If starting cell is blocked
        if (maze[0][0] == 0)
        {
            return ans;
        }

        // Initially no cell is visited
        vector<vector<int>> visited(n, vector<int>(n, 0));

        string path = "";

        // Start DFS from (0,0)
        solve(maze, n, ans, 0, 0, visited, path);

        // Sort paths lexicographically
        sort(ans.begin(), ans.end());

        return ans;
    }
};

int main()
{
    Solution obj;

    vector<vector<int>> maze =
    {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans = obj.ratInMaze(maze);

    cout << "Possible Paths:\n";

    for (string path : ans)
    {
        cout << path << endl;
    }

    return 0;
}