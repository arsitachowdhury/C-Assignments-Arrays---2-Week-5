#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
 {
    vector<int> v1;
    int n, x,sumodd=0,sumeven=0,diff;
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
       if(i%2==0)
       {
        sumeven+=v1.at(i);
       } 
       else{
        sumodd+=v1.at(i);
       }
    }
    cout<<"Difference is : "<<endl;
    cout<<sumeven<<"-"<<sumodd<<" = "<<sumeven-sumodd;
    return 0;
}
