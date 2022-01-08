#include <bits/stdc++.h>

using namespace std;

vector <int> appleAndOrange(int s, int t, int a, int b, vector <int> apple, vector <int> orange) {
    // Complete this function
}

int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       cin >> orange[orange_i];
    }
    vector <int> result = appleAndOrange(s, t, a, b, apple, orange);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}

