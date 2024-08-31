#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    bool flag = false;
    int n, x;
    cout << "Enter the size of the vector : ";
    cin >> n;
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i+1; j< v1.size(); j++)
        {
             if(v1.at(i)>v1.at(j))
             {
                flag=true;
                break;
             }
        }
    }
    if (flag == false)
        cout << "The array is sorted";
    else
        cout << "The array is not a sorted";
    return 0;
}
