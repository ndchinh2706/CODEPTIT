// https://code.ptit.edu.vn/student/question/CP04012
// GIÁ TRỊ NHỎ NHẤT CỦA XÂU

#include <bits/stdc++.h>
<<<<<<< HEAD
#define endl '\n'
using namespace std;

bool cmp(int a, int b) { return a > b; }

void TestCase()
{
    int k;
    cin >> k;
    string s;
    cin >> s;

    int d[27] = {0};
    for (auto c : s)
        d[c - 'A']++;
    sort(d, d + 27, cmp);

    while (k--)
    {
        d[0]--;
        sort(d, d + 27, cmp);
    }

    long long res = 0;
    for (int i = 0; i < 27; ++i)
    {
        if (d[i] == 0)
            break;
        res += (long long)d[i] * d[i];
=======
using namespace std;

void TestCase()
{
    int k;
    string s;
    cin >> k >> s;
 
    int dd[26] = {0};
    for (auto x : s) {
        dd[x - 'A']++;
    }
 
    priority_queue<int> pq;
    for (auto x : dd) {
        pq.push(x);
    }
        
    while (k > 0 && pq.top() != 0) {
        int x = pq.top();
        pq.pop();
        x--, k--;
        pq.push(x);
    }
 
    long long res = 0;
    while (!pq.empty()) {
        int x = pq.top();
        pq.pop();
        res += (long long)x * x;
>>>>>>> 7649b37621d13d879ad73299630b5d90caf0f1f1
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
        TestCase();
    return 0;
}