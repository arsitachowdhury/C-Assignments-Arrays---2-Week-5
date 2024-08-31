#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
 {
    vector<int> v1;
    int n, x,tgt,count=0;
    cout << "Enter the size of the vector : ";
    cin >> n;
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v1.push_back(x);
    }
    cout<<"Enter the target : ";
    cin>>tgt;
    for (int i = 0; i < v1.size(); i++)
    {
      if(v1.at(i)>tgt){
        count++;
      }  
    }
    if(count==0)
    cout<<"Not an element is greater than "<<tgt;
    else
    cout<<"There are "<<count<<" numbers are greater than "<<tgt;
    return 0;
}
