#include <iostream>
#include <vector>
using namespace std;
void fill_array(int Numbers);






int main() {

 int Size;

    cout << "How many numbers do you want to enter?" << endl;
    //user enters number
    cin>>Size;



   vector< int >nums;

   for(int i= 1; i <= Size;i++)
   {
       nums.push_back(i);
   }
   for(int j = 0; j < 10; j++)
   {
       cout<< nums[j]<<" ";
   }

    return 0;
}
