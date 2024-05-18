#include <iostream>
using namespace std;

int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    // Maximum Multiple + Single Tickets.
    int minCost = (n / m) * b + (n % m) * a; 
    // All multi-ride tickets, even if we buy extra.
    minCost = min(minCost, ((n + m - 1) / m) * b); 

    // Considering only single tickets.
    minCost = min(minCost, n * a);

    cout << minCost << endl;
    return 0;
}
