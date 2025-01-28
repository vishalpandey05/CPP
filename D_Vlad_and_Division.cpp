#include <iostream>
#include <vector>
using namespace std;

int solve(string s) {
    int n = s.length();
    vector<int> left(26, 0), right(26, 0);
    
    for (char c : s) {
        right[c - 'a']++;
    }
    
    int p = 0;    
    for (int i = 0; i < n; i++) {
        right[s[i] - 'a']--;
        
        for (int ch = 0; ch < 26; ch++) {
            if (s[i] == ch + 'a') {
                p += left[ch] * right[ch];
            }
        }
        
        left[s[i] - 'a']++;
    }
    
    return p;
}

int main() {
    string s;
    cin >> s;
    cout << solve(s) << endl;  // Output result
    return 0;
}

    int ind = N.find('.');

    if (ind == string::npos) {
        return "YES";
    }

    if (N.substr(ind) == ".0") {
        return "YES";
    }
    return "NO";
