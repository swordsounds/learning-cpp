#include <iostream>
#include <string>
#include <cmath>
// #include <vector>
#include <vector>

using namespace std;

int myNum = 15, y = 5, z = 6;
string txt = "ASASAS";
const int x  = 11;

int numbers[5] = {10, 20, 30, 40, 50};

vector<string> cars = {"Ford", "Toyota"};

string name;
int main()
{
    cout << myNum<<y<<z<<endl;
    cout << x<<endl;
    cout<<txt.length()<<endl;

    // getline(cin, name);
    // cout << name;

    int myVar = 0;
    while (myVar< 5) {
        cout << myVar << endl;
        myVar++;
    }

    for (int i = 0; i <= 5; i++) {
        cout << "HI" << i << endl;
    }

    for (int x : numbers) {
        cout << x << endl;
    }
    cars.push_back("Tesla");

    vector<string> cars = {"Volvo", "BMW", "Ford"};

    // Adding another element to the vector
    cars.push_back("Tesla");
    int arrayLength = sizeof(cars) / sizeof(cars[1]);
    cout << cars[0] << endl;
    return 0;
}
// open git bash to compile then g++ test.cpp -o test