#include <iostream>


using namespace std;


int main() {

    //declare variables
    int UserInput, number, i;

    //declare and initialize variables to zero to search
    int largest = 0;
    int smallest = 0;

    cout << "How many numbers do you want to enter? " << endl;
    // take user input to initialize variable
    cin >> UserInput;
//for loop to run amount of times of user input value
    for (i = 0; i < UserInput; i++) {
        //request number from user input to fill spaces
        cout << "Enter a number: \t" << endl;
        cin >> number;
//statement to search for largest numbers
        if (number > largest)
            //initializing smallest number to largest variable
            largest = number;
        //statement to search for smallest number
        if (!i || smallest > number)
            //initializing smallest number to smallest variable
            smallest = number;
    }

    cout << "The largest number was" << largest << endl;
    cout << "The smallest number was" << smallest << endl;
    return 0;
}
