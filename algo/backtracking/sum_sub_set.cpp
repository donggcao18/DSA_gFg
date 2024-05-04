#include <bits/stdc++.h>
using namespace std;

void print(int i, int n, int set[], int target_sum, vector<int>& subset)
{
    if (target_sum == 0)
    {
        for (int j=0; j<subset.size(); j++)
        {
            cout << subset[j] << " ";
        }
        cout << endl;
        return;
    }

    if (i == n)
    {
        return;
    }

    print (i+1, n, set, target_sum, subset);

    if (set[i] <= target_sum)
    {
        subset.push_back(set[i]);
        print(i+1, n, set, target_sum - set[i], subset);
        subset.pop_back();
    }
}
int main()
{
    int set2[] = { 3, 34, 4, 12, 5, 2, 27, 26 };
    int sum2 = 30;
    int n2 = sizeof(set2) / sizeof(set2[0]);
    vector<int> subset2;
    cout << "Output 2:" << endl;
    
    print(0, n2, set2, sum2, subset2);
    

    return 0;
}