#include <bits/stdc++.h>
using namespace std;

int beautifulNumber(vector<int> &vec)
{
    if (vec.size() < 2)
        return -1;
    int mn = *min_element(vec.begin(), vec.end());
    if (mn == 1)
        return 1;
    unordered_map<int, int> hashmap;
    for (auto &it : vec)
    {
        int num = it;
        while (!(num & 1))
        {
            hashmap[2]++;
            num >>= 1;
        }

        for (int i = 3; i * i <= num; i = i + 2)
        {
            while (num % i == 0)
            {
                hashmap[i]++;
                num /= i;
            }
        }

        if (num > 2)
            hashmap[num]++;
    }

    int ans = INT_MAX;
    for (auto &it : vec)
    {
        int num = it, count = 0;
        while (!(num & 1))
        {
            count++;
            num >>= 1;
        }

        if (count && hashmap[2] > count)
            continue;

        bool flg = false;
        for (int i = 3; i * i <= num; i = i + 2)
        {
            count = 0;
            while (num % i == 0)
            {
                count++;
                num /= i;
            }

            if (count && hashmap[i] > count)
            {
                flg = true;
                break;
            }
        }
        if (flg)
            continue;

        if (num > 2 && hashmap[num] > 1)
            continue;

        ans = min(ans, it);
    }
    return ans == INT_MAX ? -1 : ans;
}

int main(){
    vector<int> vec = {5,2,4,14};
    cout << beautifulNumber(vec) << endl;
}