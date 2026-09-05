// COMSC 210 | Lab 4 | Yeji Kim

#include <iostream>
#include <vector>

using namespace std;

struct Color{
    int red;
    int green;
    int blue;
};

int main()
{
    Color testColor = {100, 200, 300};

    cout << "Test Color: " << endl;
    cout << "Red: " << testColor.red << "Green: " << testColor.green 
         << "Blue: " << testColor.blue << endl;
    
    return 0;  
}