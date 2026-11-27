/*To implement the Floyd-Warshall algorithm for all-pairs shortest paths and derive its cubic time
complexity.*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
const int INF = 1000000;
vector<vector<int>> d = {
{0,5,INF,10},
{INF,0,3,INF},
{INF,INF,0,1},
{INF,INF,INF,0}
};
int V = d.size();
for (int k = 0; k < V; k++)
for (int i = 0; i < V; i++)
for (int j = 0; j < V; j++)
if (d[i][k] < INF && d[k][j] < INF)
d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
for (auto &row : d) {
for (int x : row)
cout << (x >= INF ? -1 : x) << "\t";
cout << endl;
}
}