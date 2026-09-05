// COMSC 210 | Lab 4 | Yeji Kim

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// make Color struct
struct Color{
    int red;
    int green;
    int blue;
};

int main()
{
    // make and initialize a Color object
    Color testColor = {100, 200, 300};

    // output results
    cout << "Test Color: " << endl;
    cout << "Red: " << testColor.red << endl;
    cout << "Green: " << testColor.green << endl;
    cout << "Blue: " << testColor.blue << endl;

    // make empty vector of Color structs
    vector<Color> colors;

    // adding test object to vector
    colors.push_back(testColor);

    cout << "First color in vector: " << endl;
    cout << "Red: " << colors[0].red << endl;
    cout << "Green: " << colors[0].green << endl;
    cout << "Blue: " << colors[0].blue << endl;

    // generate random number n between 25-50
    int n = rand() % 26 + 25;

    // push n colors into vector
    for(int i = 0; i < n; i++)
    {
        // temporary struct with random integers
        Color temp;

        temp.red= rand() % 250;
        temp.green = rand() % 250;
        temp.blue = rand() % 250;

        // push temp struct into container
        colors.push_back(temp);
    }
    
    cout << "Milestone 3: " << endl;
    cout << "Number of colors in vector: " << colors.size() << endl;

    // output formatted table showing vector's contents
    cout << left
         << setw(10) << "Color#"
         << setw(10) << "R value"
         << setw(10) << "G value"
         << setw(10) << "B value" << endl;

    cout << left
         << setw(10) << "------"
         << setw(10) << "-------"
         << setw(10) << "-------"
         << setw(10) << "-------" << endl;

    for(int i = 0; i < colors.size(); i++)
    {
        cout << left
             << setw(10) << i + 1
             << setw(10) << colors[i].red
             << setw(10) << colors[i].green
             << setw(10) << colors[i].blue
             << endl;
    }

    return 0;  
}