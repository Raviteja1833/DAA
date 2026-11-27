/*To solve the Travelling Salesman Problem (TSP) using dynamic programming with bitmasking and
analyze its exponential state space.*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
vector<vector<int>> cost = {
{0,10,15,20},
{10,0,35,25},
{15,35,0,30},
{20,25,30,0}
};
int n = cost.size();
int N = 1 << n;
const int INF = 1000000000;
vector<vector<int>> dp(N, vector<int>(n, INF));
dp[1][0] = 0;
for (int mask = 1; mask < N; mask++) {
for (int u = 0; u < n; u++) {
if (!(mask & (1 << u)) || dp[mask][u] == INF) continue;
for (int v = 0; v < n; v++) {
if (mask & (1 << v)) continue;
int nextMask = mask | (1 << v);
dp[nextMask][v] =
min(dp[nextMask][v], dp[mask][u] + cost[u][v]);
}
}
}
int ans = INF;
int full = N - 1;
for (int u = 1; u < n; u++)
ans = min(ans, dp[full][u] + cost[u][0]);
cout << "Minimum tour cost = " << ans;
}