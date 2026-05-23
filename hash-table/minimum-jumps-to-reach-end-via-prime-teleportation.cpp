class Solution {
public:
    int minJumps(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return 0;

    int max_val = 0;
    for (int x : nums) if (x > max_val) max_val = x;

    // 1. Sieve to find primes
    vector<bool> is_prime(max_val + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= max_val; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= max_val; i += p)
                is_prime[i] = false;
        }
    }

    // 2. Map primes (that exist in nums) to their multiples' indices
    vector<vector<int>> prime_to_indices(max_val + 1);
    for (int i = 0; i < n; i++) {
        int val = nums[i];
        for (int p = 1; p * p <= val; p++) {
            if (val % p == 0) {
                if (is_prime[p]) prime_to_indices[p].push_back(i);
                if (val / p != p && is_prime[val / p]) 
                    prime_to_indices[val / p].push_back(i);
            }
        }
    }

    // 3. BFS
    queue<pair<int, int>> q;
    q.push({0, 0});
    vector<bool> visited(n, false);
    vector<bool> prime_used(max_val + 1, false);
    visited[0] = true;

    while (!q.empty()) {
        int curr = q.front().first;
        int dist = q.front().second;
        q.pop();

        if (curr == n - 1) return dist;

        // Adjacent Steps
        if (curr + 1 < n && !visited[curr + 1]) {
            visited[curr + 1] = true;
            q.push({curr + 1, dist + 1});
        }
        if (curr - 1 >= 0 && !visited[curr - 1]) {
            visited[curr - 1] = true;
            q.push({curr - 1, dist + 1});
        }

        // Prime Teleportation
        int p = nums[curr];
        if (p <= max_val && is_prime[p] && !prime_used[p]) {
            for (int next_idx : prime_to_indices[p]) {
                if (!visited[next_idx]) {
                    visited[next_idx] = true;
                    q.push({next_idx, dist + 1});
                }
            }
            prime_used[p] = true; // Mark prime as used to avoid O(N^2)
        }
    }

    return -1;
}
};