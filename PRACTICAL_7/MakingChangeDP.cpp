// To find the minimum number of coins required to make a target amount using dynamic programming and analyze its complexity.

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int minCoins(const vector<int>& coins, int amount) {
 vector<int> dp(amount + 1, INT_MAX);
 dp[0] = 0;
 for (int x = 1; x <= amount; x++) {
 for (int coin : coins) {
 if (coin <= x && dp[x - coin] != INT_MAX) {
 dp[x] = min(dp[x], dp[x - coin] + 1);
 }
 }
 }
 return dp[amount] == INT_MAX ? -1 : dp[amount];
}
int main() {
 vector<int> coins = {1, 3, 4};
 int amount = 6;
 cout << minCoins(coins, amount);
}
