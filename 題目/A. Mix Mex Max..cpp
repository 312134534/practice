// 題目網址: "https://codeforces.com/contest/2127/problem/A"

// #define debug
#include<bits/stdc++.h>
using namespace std;

template<typename A, typename B>
ostream& operator<<(ostream &os, const pair<A, B> &p) {
    return os << '(' << p.first << ", " << p.second << ')';
}

template<typename T_container, typename T = typename enable_if<
    !is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream& operator<<(ostream &os, const T_container &v) {
    os << '{';
    string sep;
    for (const T &x : v) os << sep << x, sep = ", ";
    return os << '}';
}

template<typename K, typename V>
ostream& operator<<(ostream &os, const map<K, V> &m) {
    os << '{';
    string sep;
    for (const auto &p : m) os << sep << p.first << ": " << p.second, sep = ", ";
    return os << '}';
}
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define all(x) x.begin() , x.end()
#ifdef debug
    #define dbg(x) x
#else
    #define dbg(x)
#endif

void Solution()
{
    int n, cmp = -1, f = 1;
    cin >> n;
    while(n--)
    {
        int t;
        cin >> t;
        if(t == 0)
        {
            f = 0;
            
        }
        if(cmp == -1 && t != -1) cmp = t;
        else if(cmp != t && t != -1)
        {
            f = 0;
        }
    }
    cout << (f ? "YES" : "NO") << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int tc = 1, t;
    cin >>t;
    while(t--) 
    {
        dbg(cout << "test #" << tc++ << "\n";)
        Solution();
    }

    return 0;
}


