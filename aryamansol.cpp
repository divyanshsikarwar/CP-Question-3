#include <bits/stdc++.h> 
using namespace std;
#define all(x) x.begin(), x.end()
#define fo(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define vl vector<ll>
#define vi vector<int>
#define ui unordered_set<int>
#define pb push_back

int main(){
    int n{};
    string a{};
    string b{};
    
    int count{};
    cin >> n;
    
    fo(i, n) {
        count = 0;
        cin >> a >> b;
        for (auto c : a) {
            if (b.find(c) != string::npos) {
                count++;
                break;
            }
        }
    (count > 0) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
