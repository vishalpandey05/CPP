#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <string>
using namespace std;

bool canReachRightBank(int n, int m, int k, const string &river) {
    queue<pair<int, int>> q;  // (current_position, meters_swum)
    set<int> visited;
    
    q.push({0, 0});
    visited.insert(0);
    
    while (!q.empty()) {
        int position = q.front().first;
        int swum = q.front().second;
        q.pop();
        
        // Check if ErnKor has reached the right bank
        if (position == n + 1) {
            return true;
        }
        
        // Explore moves
        // If on a log or the bank
        if (position == 0 || river[position - 1] == 'L') {
            for (int jump = 1; jump <= m; ++jump) {
                int new_position = position + jump;
                if (new_position == n + 1) {
                    return true;
                }
                if (new_position <= n && visited.find(new_position) == visited.end() && river[new_position - 1] != 'C') {
                    visited.insert(new_position);
                    q.push({new_position, swum});
                }
            }
        }
        
        // If in the water
        if (position != 0 && position <= n && river[position - 1] == 'W') {
            int new_position = position + 1;
            if (new_position == n + 1) {
                return true;
            }
            if (new_position <= n && visited.find(new_position) == visited.end() && swum + 1 <= k && river[new_position - 1] != 'C') {
                visited.insert(new_position);
                q.push({new_position, swum + 1});
            }
        }
    }
    
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string river;
        cin >> river;
        
        if (canReachRightBank(n, m, k, river)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
