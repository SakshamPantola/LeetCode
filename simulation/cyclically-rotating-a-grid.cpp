class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int num_layers = min(m, n) / 2;

        for (int l = 0; l < num_layers; l++) {
            vector<int> layer;
            
            // 1. Traverse layer to get elements in a flat list
            // Top: left to right
            for (int j = l; j < n - l - 1; j++) layer.push_back(grid[l][j]);
            // Right: top to bottom
            for (int i = l; i < m - l - 1; i++) layer.push_back(grid[i][n - l - 1]);
            // Bottom: right to left
            for (int j = n - l - 1; j > l; j--) layer.push_back(grid[m - l - 1][j]);
            // Left: bottom to top
            for (int i = m - l - 1; i > l; i--) layer.push_back(grid[i][l]);

            int len = layer.size();
            int actual_k = k % len;
            
            if (actual_k == 0) continue;

            // 2. Fill back the grid with shifted index
            int idx = 0;
            // Shifting counter-clockwise means picking element from (i + k) % len
            auto get_val = [&](int &i) { return layer[(i + actual_k) % len]; };

            int pos = 0;
            for (int j = l; j < n - l - 1; j++) grid[l][j] = get_val(pos), pos++;
            for (int i = l; i < m - l - 1; i++) grid[i][n - l - 1] = get_val(pos), pos++;
            for (int j = n - l - 1; j > l; j--) grid[m - l - 1][j] = get_val(pos), pos++;
            for (int i = m - l - 1; i > l; i--) grid[i][l] = get_val(pos), pos++;
        }

        return grid;
    }
};