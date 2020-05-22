#include <iostream>
#include <vector>
using namespace std;
void fill_array(int Numbers);




void  fill_array(int array[],int Size) {

    for (int i = 0; i < Size; i++)
    {

cout<<array[i]<<"\t";
    }
cout<<endl;
}

int main() {

 int Numbers;


    cout << "How many numbers do you want to enter?" << endl;
    //user enters number
    cin>>Numbers;
    int nums[Numbers];
    //fill_array( Numbers);
    //cout<<"enter a number";

//check to see if statement is true to enter whileloop


    int count=0;
    for(int i=0; i<Numbers; i++)
    {

       if(cin>>nums[i])
       {
           count++;
       }
       else
           {

           break;
       }


    }
 fill_array( nums,count);

    return 0;
}
