//
// Created by dongxuecheng on 2019/5/15.
//WA
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    int n, maxxb, sum = 0;
    while (cin >> n) {
        priority_queue<int> pq;
        vector<int> v;
        while (n--) {
            int temp;
            cin >> temp;
            v.push_back(temp);
            pq.push(temp);
        }
        while (pq.size() != 1) {
            maxxb = distance(v.begin(), find(v.begin(), v.end(), pq.top()));
            pq.pop();
            if (maxxb == 0) {
                sum += v[maxxb + 1];
                v.erase(v.begin() + maxxb, v.begin() + maxxb + 1);
            } else if (maxxb == v.size() - 1) {
                sum += v[maxxb - 1];
                v.erase(v.begin() + maxxb, v.begin() + maxxb + 1);
            } else {
                sum += max(v[maxxb + 1], v[maxxb - 1]);
                v.erase(v.begin() + maxxb, v.begin() + maxxb + 1);
            }
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
