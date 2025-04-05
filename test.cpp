#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int myNum = 15, y = 5, z = 6;
string txt = "ASASAS";
const int x  = 11;

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
        cout << myVar;
        myVar++;
    }
    return 0;
}
// open git bash to compile then g++ test.cpp -o test