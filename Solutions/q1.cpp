#include <bits/stdc++.h>
using namespace std;

int findGoodPairs(string &a, string &b)
{
    unordered_map<string, int> hashmap;
    int ans = 1;
    for (int i = 0; i < a.size(); i++)
    {
        string tmp = "";
        for (int j = i; j < a.size(); j++)
        {
            tmp += a[j];
            hashmap[tmp]++;
        }
    }

    for (int i = 0; i < b.size(); i++)
    {
        string tmp = "";
        for (int j = i; j < b.size(); j++)
        {
            tmp += b[j];
            ans += hashmap[tmp];
        }
    }
    return ans;
}

int main(){
    string a = "abcd", b = "abce";
    cout << findGoodPairs(a,b) << endl;
}