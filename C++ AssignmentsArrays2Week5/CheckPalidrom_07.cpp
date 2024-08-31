#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    bool flag=false;
    int n, x;
    cout << "Enter the size of the vector : ";
    cin >> n;
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    v2 = v1;
    reverse(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        if(v2.at(i)!=v1.at(i))
        {
             flag=true;
             break;
        }
    }
    if(flag==false)
    cout<<"The array is Palidrome";
    else
    cout<<"The array is not a Palidrome";
    return 0;
}
