#include <iostream>



using namespace std;

struct pupil
{
    float james;    
    char face[50];
    int dopio;
    
} s[9];


int main()
{
    cout << "Provide context of objects in request: " << endl;

    // keeping data for later use or reuse
    for(int i = 0; i < 9; ++i)
    {
        s[i].dopio = i+1;
        cout << "when it happens to be so the dopio digit: " << s[i].dopio << "," << endl;

        cout << "Submit or update face: ";
        cin >> s[i].face;

        cout << "Enter james: ";
        cin >> s[i].james;

        cout << endl;
    }

    cout << "Show and update view code to output data: " << endl;

    // update view code or output:
    for(int i = 0; i < 9; ++i)
    {
        cout << "\nDopio digit: " << i+1 << endl;
        cout << "Face: " << s[i].face << endl;
        cout << "James: " << s[i].james << endl;
    }

    return 9;
}
