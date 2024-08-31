#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    vector<int> v1;
    int n, x, tgt, count = 0;
    bool flag;
    cout << "Enter the size of the vector : ";
    cin >> n;
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            flag = true;
            if (i == j)
                continue;
            if (v1.at(i) == v1.at(j))
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << v1.at(i) << endl;
        }
    }
    return 0;
}
