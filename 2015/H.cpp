//
// Created by dongxuecheng on 2019/5/16.
//
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int t = 0, i = 0, j = 0;
    cin >> t;
    while (t--)
    {
        int z = 0;
        cin >> z;
        int ary[z][2];
        set<int> dict;

        for (i = 0; i < z; i++)
        {
            scanf("%d %d", &ary[i][0], &ary[i][1]);
        }

        for (i = 0; i < z - 1; i++)
        {
            for (j = i + 1; j < z; j++)
            {
                if ((ary[i][0] - ary[j][0]) == 0)
                {
                    continue;
                }
                dict.insert((ary[i][1] - ary[j][1]) / (ary[i][0] - ary[j][0]));
                // cout << "zhi" << (ary[i][1] - ary[j][1]) / (ary[i][0] - ary[j][0]) << endl;
                // cout << " length: " << dict.size() << " z: " << z << " t: " << t << " i: " << i << " j: " << j << endl;
            }
        }
        cout << dict.size() << endl;
    }
}
