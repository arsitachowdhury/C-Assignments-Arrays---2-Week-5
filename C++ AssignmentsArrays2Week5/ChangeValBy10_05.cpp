#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
   vector<int> v1;
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
      if (i % 2 == 0)
      {
         v1.at(i) += 10;
      }
      else
      {
         v1.at(i) *= 2;
      }
   }
   cout << "After modification" << endl;
   for (int i = 0; i < v1.size(); i++)
   {
      cout << v1[i] << " ";
   }
   return 0;
}