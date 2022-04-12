// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

// C++ solution using map
vector<int> common_element(vector<int> a, vector<int> b)
vector<int> common_element(vector<int> a, vector<int> b)
{
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    for (int i = 0; i < a.size(); i++)
    {
        m1[a[i]]++;
    }

    for (int i = 0; i < b.size(); i++)
    {
        m2[b[i]]++;
    }

    vector<int> res;
    for (auto p : m1)
    {
        if (m2.find(p.first) != m2.end())
        {
            int mini = min(p.second, m2[p.first]);
            for (int i = 0; i < mini; i++)
            {
                res.push_back(p.first);
            }
        }
    }

    sort(res.begin(), res.end());

    return res;
}

// C++  Two pointers Apporach
// vector<int> common_element(vector<int> a, vector<int> b)
// {
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());
//     vector<int> res;
//     int i = 0, j = 0;
//     while (i < a.size() and j < b.size())
//     {
//         if (a[i] == b[j])
//         {
//             res.push_back(a[i]);
//             i++;
//             j++;
//         }
//         else if (a[i] > b[j])
//         {
//             i++;
//         }
//         else
//         {
//             j++;
//         }
//     }

//     sort(res.begin(), res.end());

//     return res;
// }