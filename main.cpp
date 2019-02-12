#include <iostream>
#include <sstream>
#include <vector>

using namespace std;
int main() {
   float decimal_one = 10.5;
   cout<<"Float: " + to_string(decimal_one)<<endl;

   double decimal_two = 200.3245234;
   cout<<"Double: " + to_string(decimal_two)<<endl;

   bool b1 = true;
   cout<<"Boolean: " + to_string(b1)<<endl;
   int arr[5];
   arr[0] = 2;
   arr[1] = 3;
   arr[2] = 4;
   cout<<"Array Value at Index 0: ";
   cout<<arr[0]<<endl;
   vector<int> v;//list
    for(int i = 1; i <= 10; i++)
        v.push_back(i);
    cout<<"Vector Value at Index 2: ";
    cout<<v.at(2)<<endl;
   //Example One
   int x = 6;
   string num = "5";
   stringstream a(num);
   int y;
   a >> y;
   int z = x + y;
   cout<<"5 + 6 = ";
   cout<<z<<endl;
   cout<<x + decimal_one;
   return 0;

}