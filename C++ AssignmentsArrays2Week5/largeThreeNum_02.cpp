#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter no of elements : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = INT_MIN;
    int smx = INT_MIN, tmx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > smx && arr[i] != mx)
        {
            smx = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > tmx && arr[i] != mx && arr[i] != smx)
        {
            tmx = arr[i];
        }
    }
cout<<"Maximum number is : "<<mx<<endl;
cout<<"2nd Maximum number is : "<<smx<<endl;
cout<<"3rd Maximum number is : "<<tmx<<endl;
    return 0;
}